y=( "$@" )
r=${y[0]}
c=${y[1]}
x=2
echo "enterd matrix is ->"
for ((i=0;i<r;i++ ))
do
for (( j=0;j<c;j++ ))
do
echo -n "${y[x]} "
((x++))
done
echo
done


x=2
echo
echo "transpose matrix is ->"
for ((i=0;i<c;i++ ))
do
for (( j=0;j<r;j++ ))
do
echo -n "${y[x]} "
x=$((x+c))
done
x=$((i+3))
echo
done