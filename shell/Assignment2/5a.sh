echo "enter file name-> "
i=1
j=1
read file
while read p
do
((++i))
set $p
j=`expr $j + $#`
done < $file

echo "Total no.of line is :" $i
echo "Total no.of word is :" $j
