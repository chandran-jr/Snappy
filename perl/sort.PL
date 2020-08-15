
print "Enter array size: \n";
$n=<STDIN>;
print "Enter array elements:\n";
for($i=0;$i<$n;$i++)
{
$num[$i]=<STDIN>;
}

print "Bubble sort descending order \n";    
for($j=0;$j<$n-1;$j++)
{
for($k=0;$k<$n-$j-1;$k=$k+1)
{
if($num[$k]<$num[$k+1])
{
$temp2=$num[$k];
$num[$k]=$num[$k+1];
$num[$k+1]=$temp2;
}
}
}
for($j=0;$j<=$n;$j++)
{
print"$num[$j]";
}



print"Selection sort ascending order \n";
for($j=0;$j<$n;$j++)
{
$min=$j;
for($k=$j+1;$k<$n;$k++)
{
if($num[$k]<$num[$min])
{
$min=$k;
}
}
$temp1=$num[$j];
$num[$j]=$num[$min];
$num[$min]=$temp1;
}
for($i=0;$i<=$n;$i++)
{
print"$num[$i]";
}
