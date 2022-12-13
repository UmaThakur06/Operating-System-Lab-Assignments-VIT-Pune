#Write a Shell script to find the Factorial of given number using Recurrence Method and Without Recurrence Method (Both way).
function f() {
    local n=$1
    if [[ $n -eq 0 ]]; then
        echo 1
    else
        echo $((n*$(f $n-1)))
    fi
}
 
for i in {1..10}; do
    echo "$i!=$(f $i)"
donefactorial()
{
local=$1
if((local<=2)); then
echo $local
else
f=$((local -1))
#Recursive call
f=$(factorial $f)
f=$((f*local))
echo $f
fi
}
#main script
read -p "Enter the number:" n
if((n==0)); then
echo 1
else
#calling factorial function
factorial $n
fi