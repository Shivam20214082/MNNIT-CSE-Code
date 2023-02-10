x=( "$@" )
y=1
echo "no. of direction-> " ${x[0]}
for (( i=0;i<${x[0]};i++ ))
do 
v1[i]=${x[$y]}
((y++))
done
z=$((2*${x[0]}))
for (( i=0;i<$1;i++ ))
do 
v2[i]=${x[$y]}
((y++))
done

if (( ${#v1[@]} != ${#v2[@]} ))
then 
echo "Invalid Input"
exit 1
else
n=${#v1[@]}
ans=0
for ((i=0;i<$n;i++))
do 
x=( ${v1[i]}*${v2[i]} )
ans=$(( ans+x))
done
fi
echo "Dot product = $ans"
