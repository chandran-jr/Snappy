print("Enter number\n");

$n=<>;

print("Enter some IP addresses\n");
for($i=0;$i<$n;$i++){
    $arr[$i]=<>;
}

for($i=0;$i<$n;$i++){
if($arr[$i]=~/^[0-9]{3}\.[0-9]{3}\.[0-9]{3}\.[0-9]{3}/i){
   print $arr[$i];
}
}
