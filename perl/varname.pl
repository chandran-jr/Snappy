print "Enter the variable thingy completely\n";
$var=<STDIN>;
if($var=~/^\$[A-Za-z][0-9a-zA-Z]*/)
{
    print "It is a scalar variable";
}
elsif($var=~/^\@[A-Za-z][0-9a-zA-Z]*/)
{
    print "It is array";
}
elsif($var=~/^\%[A-Za-z][0-9a-zA-Z]*/)
{
        print "It is hash variable";
}
else
{
    print "Not a valid variable";
}
