print "Input string:\n";
$str=<STDIN>;
if($str=~m/python.*/ || $str=~m/.*perl/){
    print "true";
}
else{
    print "false";
}
