#include <stdio.h>
int main()
{
//take a input as a integer since % dose not except float.  
  int a;
  scanf("%i",&a);
  if (a%2==0){
    printf("The number is even.\n");
  }
  else if (a%2!=0){
    printf("The number is odd.");
  }
  else{
    printf("Enter valid number.");
  }
  return 0;
  
}