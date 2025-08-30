//greatest of two numbers
#include <stdio.h>
int main()
{
    float a;
    float b;
    printf("What is first number?");
    scanf("%f",&a);
    printf("What is second number?");
    scanf("%f",&b);
    
    if (a>b){
      printf("%f is the greatest number.",a);
    }
    else if (a<b) {
      printf("%f is the greatest number.",b);
    }
    else (a==b);{
      printf("Both the number is equal.");
    }
    return 0;
    
}