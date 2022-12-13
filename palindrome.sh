#Write a Shell script to check whether given number is palindrome or not. Also print the reverse of the given number.
echo "Enter the string 1:"
read str
reverse=" "
len=${#str}
for (( i=$len-1; i>=0; i-- ))
do
    reverse="$reverse${str:$i:1}"
done
if [ $str == $reverse ]
then
echo "$str is palindrome"
else
echo "$str is not palindrome"
fi
echo "$reverse"