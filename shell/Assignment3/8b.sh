n=$1
if (( $n<=1 ))
then 
echo "Invalid"
else
for(( i=2;i<$n;i++ ))
do 
if (( $n%$i ==0 ))
then 
echo "$n is not a prime number"
exit 1
fi
done
echo "$n is a prime number"
fi