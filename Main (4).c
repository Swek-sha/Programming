//Positive negative or zero
#include <stdio.h>
int main()
{
  float a;
  scanf("%f",&a);
  if (a>0){
    printf("%f is a positive number.",a);
  }
  else if (a==0){
    printf("%f is zero.",a);
  }
  else{
    printf("%f is a negative number.",a);
  }
  return 0;
}