print("Enter number of strings\n");

$n=<>;
$c=0;

print("Enter the lines\n");
for($i=0;$i<$n;$i++){
    $arr[$i]=<>;
}

for($i=0;$i<$n;$i++){
if($arr[$i]=~/india/i){
    $c=$c+1;
}
}
print $c;
