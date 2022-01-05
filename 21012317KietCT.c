#!/bin/bash

while [ $a -ne $b ]
do
    if [ $a -gt $b ] 
    then
            a=$(($a - $b))
    else
            b=$(($b - $a))
    fi
done
    echo "UCLN: $a"
#!/bin/bash
sum=0
i=0
while [ $sum -lt $l ]
do
    sum=$ (( $sum + $i ))
    i=$ (($i + 1 ))
    
done
echo $(($i - 2))