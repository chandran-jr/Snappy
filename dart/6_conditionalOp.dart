void main(){
  var x = 10;
  var y = x > 12 ? "Benar, x > 12" : "Salah!";
  print(y);

  var a = null; 
  var b = 12; 
  var c = a ?? b; 
  print(c);
  // expr1 ?? expr2
  // If expr1 is non-null, returns its value; 
  // otherwise, evaluates and returns the value of expr2
}
