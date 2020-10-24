void main(){

  var num = 0; 
  var count = 0; 

  for(num=0; num<=20; num++) { 
    if(num % 2 == 0){ 
      continue;
    } 
    count++; 
  } 
  print("The count of odd values between 0 and 20 is: ${count}");

}
