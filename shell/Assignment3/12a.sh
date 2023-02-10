echo "Enter Number of rows"
read  r
echo "Enter Number of columns"
read  c
x=0
echo "Enter elements"
for ((i=0;i<$r;i++ ))
do
for (( j=0;j<$c;j++ ))
do
read -p "enter the value of $i, $j element " arr[$x]
((x++))
done
done
x=0
echo "enterd matrix is ->"
for ((i=0;i<r;i++ ))
do
for (( j=0;j<c;j++ ))
do
echo -n "${arr[x]} "
((x++))
done
echo
done
x=0
echo
echo "transpose matrix is ->"
for ((i=0;i<c;i++ ))
do
for (( j=0;j<r;j++ ))
do
echo -n "${arr[x]} "
x=( $x+$c )
done
x=$i+1
echo
done
