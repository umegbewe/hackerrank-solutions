read x
sum=0
i=0
for i in $(seq 0 $x)
do
read num
sum=$(( $sum + $num ))
done
printf "%.3f\n" `echo "$sum / $x" | bc -l`
