echo "Add -a Subtract-s Multiply -m Quotient -c Remainder -r"
echo 
echo "Enter operation and two integer"
read o a b
case $o in 
'a' )
echo "The Sum of $a and $b is " $((a + b));;
's' )
echo "The Difference of $a and $b is " $((a - b));;
'm' )
echo "The Product of $a and $b is " $((a * b));;
'c' )
echo "The Sum of $a and $b is " $((a / b));;
'r' )
echo "The Sum of $a and $b is " $((a % b));;
* )
echo "Invalid Input"
esac