n=$1
arr[0]='0'
arr[1]='0'
for(( i=2;i<$n;i++ ))
do
arr[i]='1'
done
s=`echo "scale=0; sqrt($n)" | bc`
echo
for(( i=2;i<=$s;i++ ))
do
for(( j= $i+1 ;j<=$n;j++ ))
do
if (( $j%$i == 0 ))
then 
arr[j]='0'
fi
done
done
echo "prime number below $n are ->"
for(( i=0;i<$n;i++ ))
do
if (( ${arr[i]}==1 ))
then 
echo $i
fi
done