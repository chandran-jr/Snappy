void main(){
  int a = 12;
  int b = 5;

  print(a + b);
  print(a - b);
  print(a * b);
  print(a / b);
  print(a ~/ b);  // Divide, returning an int
  print(a % b); 

  a++; b--;
  print(a);
  print(b);
  
  a+=3; b-=5;
  print(a);
  print(b);
  
  a*=2; b~/=-1;
  print(a);
  print(b); 
}
