echo "enter a number"
read n
first=0
second=1
if ((n>1))
then 
echo 0
echo 1
elif ((n==1)) 
then
echo 0
else
echo "invalid input"
fi
for ((i=2;i<$n;i++))
do
echo $((first+second))
t=$second
second=$((first+second))
first=$t
done