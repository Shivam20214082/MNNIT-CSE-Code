read -p "Enter the file name :" f
while read -n1 c
do 
n=$c
echo $n
if [ $n ]
then
echo "multiplication table of $n is "
for((i=1;i<=10;i++))
do
echo `expr $i \* $n`
done
fi
done < $f




# output
