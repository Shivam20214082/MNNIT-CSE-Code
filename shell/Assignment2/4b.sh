files=$@
echo "enter the name of directory : "
read dir_name
for i in ${files[@]}
do
    cp $i $dir_name
done