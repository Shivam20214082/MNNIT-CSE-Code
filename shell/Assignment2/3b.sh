n=$1
echo "multiplication table of $n is "
for((i=1;i<=10;i++))
do
echo `expr $i \* $n`
done




# output


# shivamsn@Shivam-Gupta:/mnt/c/Users/shiva/Desktop/github/shell/Assignment2$ ./3b.sh 3
# ./3b.sh: line 1: 3: command not found
# multiplication table of 3 is
# 3
# 6
# 9
# 12
# 15
# 18
# 21
# 24
# 27
# 30