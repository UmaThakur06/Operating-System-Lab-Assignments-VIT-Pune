#Write a Shell script to check whether given number is prime or not. Also print the reverse of the given number.
echo "enter number"
read num
function prime
{
for((i=2; i<=num/2; i++))
do
  if [ $((num%i)) -eq 0 ]
  then
    echo "$num is not a prime number."
    exit
  fi
done
echo "$num is a prime number."
}
r=`prime $number`
echo "$r"
while [ $num -ne 0 ]
do
    reverse=$reverse$((num%10))
    num=$((num/10))
done
echo "Reverse of $number is $reverse"