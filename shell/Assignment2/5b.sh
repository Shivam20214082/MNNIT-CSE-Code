i=1
j=1
while read p
do
((++i))
set $p
j=`expr $j + $#`
done < $1

echo "Total no.of line is :" $i
echo "Total no.of word is :" $j
