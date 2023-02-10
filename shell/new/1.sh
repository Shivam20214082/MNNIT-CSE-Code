# echo "hello world"
# echo $BASH
# echo $BASH_VERSION
# name=mark
# echo the name is $name
# #10val=10  variable name should not start with number
# echo $10val

# echo "enter the variable"
# # read name1 name2  #variable eneter in next line
# read -p " name1 " name1
# read -p "name2 " name2 #eneterd name is same line in terminal
# echo entered name is $name1 and $name2

# read -sp 'password' password #hiding entered data in terminal
# echo  passward is $password

# echo enter name :
# read -a names
# echo Names : ${names[0]} and ${names[1]}


# echo enter name :
# read   #by default entered variable goes in REPLY varible which in built in variable
# echo Names : $REPLY

# i=10
# if [ $i -ge 10 ]
# j="abc"
# if (($i >= 15 )) #both sentex are valid
# if(( $j == " abcd" ))#it give wrong output
# if [ $j == "abcd" ]
# then 
# echo "true"
# else 
# echo "false"
# fi


# echo  "enter the name of file: \c" #\c will print as it is
# echo  -e "enter the name of file: \c" #now cursor will on same line by using -e and \c
# read file

# if [ -s $file ]#for checking file is empty or not
# if [ -d $dir_name ]#for checking directory existence
# if [ -e $file ]#for checking file existence
# then
# echo "file exist"
# else 
# echo "file not found"
# fi

#append in file
# echo  -e "enter the name of file: \c" #now cursor will on same line by using -e and \c
# read file
# if [ -e $file ] #for checking file existence
# then
#     if [ -w $file ] #checking weather file has write condition or not
#     then
#     echo "write content and to exit click ctrl +c or ctrl+d"
#     cat >> $file
#     else 
#     echo "file didn't has write permission"
#     fi
# else 
# echo "file not found"
# fi


#logical and operator
# age=20
# if [[ $age -gt 18 && $age -lt 30 ]] #
# # if [ $age -gt 18 -a $age -lt 30 ] #
# # if [ $age -gt 18 ] && [ $age -lt 30 ]
# then echo "age is valid"
# else
# echo "age is invalid"
# fi


#logical or
# age=15
# if [[ $age -gt 18 || $age -lt 0 ]] #
# # if [ $age -gt 18 -o $age -lt 30 ] #
# # if [ $age -gt 18 ] && [ $age -lt 30 ]
# then echo "age is valid"
# else
# echo "age is invalid"
# fi


#arthimatic operation
# x=20
# y=10
# echo $(( x + y )) #giving space is good
# echo $(expr $x + $y )
# # echo $(expr $x * $y) #it give error in multiplication
# echo $(expr $x \* $y)


#floating point math operation
#normal operation on float will give error
 
# x=20.5
# y=10
# echo  $x + $y | bc
# ech $(( x - y ))
# echo  $x \* $y | bc
# echo  $x / $y | bc #it will print 2
# echo  "scale= 2;$x / $y" | bc 


#case operaation
# echo -e "enter some charector : \c"
# read value

# case $value in 
# [a-z] )
# echo " User enter lower case";;
# [A-Z] )
# echo " User enter upper case ";;
# [0-9] )
# echo " User enter number  ";;
# ? )
# echo "User enter Special charecter ";;
# *)
# echo " Unknown input "
# esac

# array variable
# os=('ubuntu' 'windows' 'kali')
# os[3]='mac'

# unset os[2] #to remove element
# echo ${os[0]}
# echo ${os[1]}
# echo ${os[2]}
# echo ${os[3]}
# echo ${os[@]} #print all data
# echo ${!os[@]} #print indexes
# echo ${#os[@]} #print length of array
# string=faskklsa
# echo ${string[0]}
# echo ${string[1]} #noting is print because whole value is at 0 index


#while loop
# syntax
# while [ condition ] or while (( condition ))
# do 
#   statement1
#   statement1
#   statement1
# done

# i=0
# while [ $i -le 3 ] #space is neccesary
# do 
# echo "$i"
# ((++i))
# sleep 1
# xterm & #this will open new terminal
# done


#reading file using while loop

# while read p
# do 
# echo $p
# done < 1.txt

#second method for reading file
# cat 1.txt | while read p
# do
# echo $p
# done

# until loop
# syntax
# until [ condition ]
# do 
# c1
# c1
# c1
# done


#for loop
# syntax
# for((i=1;comditiom;increament))
# do
# c1
# c1
# done

# for i in 1 2 3 4 5
# do 
# echo $i
# done


# for i in {1..10}
# do 
# echo $i
# done


# for i in {1..10..2} # {start..end..increment}
# do 
# echo $i
# done

# for c in ls pwd date
# do 
# echo "............$c............."
# $c
# done

# select loop
# syntax
# select var_name in list
# do
#    commmand
#    commmand
#    commmand
#    commmand
# done

# select name in shivam shyam mark
# do 
# echo "$name selected"
# done

# break and continue also work same as in c


