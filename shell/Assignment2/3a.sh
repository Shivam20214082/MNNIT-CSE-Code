echo "Enter a number"
read n
echo "multiplication table of $n is "
for((i=1;i<=10;i++))
do
echo `expr $i \* $n`
done
