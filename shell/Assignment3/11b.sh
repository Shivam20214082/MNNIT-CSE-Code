n1=$1
n2=$2
gcd(){
    m=$1
    n=$2
    if (( m % n == 0 ))
    then 
    echo "Gcd is $n"
    exit 1
    else 
    x=$(( m % n ))
    gcd $n $x
    fi
}
if ((n1>n2))
then 
gcd $n1 $n2
else
gcd $n2 $n1

fi
