//load program card in external main memory Block B0 or Block B0 B1 .
#include<iostream>
#include<vector>
#include<fstream>
#include <string>
#include<bits/stdc++.h>
using namespace std;
#define ROW 100
#define COL 4
vector<vector<string>> Memory(ROW, vector<string>(COL,"-"));
int c;
vector<string> R(4);
vector<string> IR(4);
int IC {0};
bool C {false};
int SI=1;
vector<string> words {};
string line;
int IC1;

void READ(int);
void LOAD();
void printM(vector<vector<char>>&);

void LOAD(){
    ifstream fin;
    fin.open("input.txt");
    int temp=0;
    string s;
    bool flag = false;
    int count=0;

     while(fin){
         getline(fin, line); 
        int c=0;
 
         if(line[0]=='$'){
            count++;
            continue;
         }
         else if(count==1){
         int wordLen = line.length();

            for(int j=0;j<ROW;j++){
                for(int k=0;k<COL;k++){
                

                    if(c < wordLen){
                         Memory[j][k]=line[c++];
                        
                    }
                    else
                    {
                    flag = true;
                    break;
                    }  
                }
                IC++;
             if(flag==true)
             {
               
                break;
             }
          }
         }
        

        
     }
     fin.close();
    
}   

void printM(vector<vector<string>> &M){
    int cnt = 0;
    int block = 0;
    for(int i=0; i<ROW; i++)
    {   
        if(cnt==10 || cnt == 0)
        {
            cout<<"\nBlock "<< block <<endl;
            block++;
            cnt=0;
        }
        cout<<i<<" =>  ";
        for(int j=0; j<COL; j++)
        {
            cout<<M.at(i).at(j)<<"  ";
        }
        cnt++;
        
        cout<<endl;
    }
}

int main(){
    ofstream fout;   
    fout.open("output.txt");
    fout<<"";
    fout.close();
    LOAD();
    printM(Memory);
}
