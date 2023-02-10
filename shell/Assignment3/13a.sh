echo "eneter first vector ratio"
read -a v1
echo "eneter second vector ratio"
read -a v2

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
