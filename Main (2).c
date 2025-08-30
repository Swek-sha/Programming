//greatest of three numbers
#include <stdio.h>
int main()
{
    float a;
    float b;
    float c;

    scanf("%f",&a);

    scanf("%f",&b);
    
    scanf("%f",&c);
    
    if (a>b && a>c){
      printf("%f is the greatest number.",a);
    }
    else if (b>a && b>c) {
      printf("%f is the greatest number.",b);
    }
    else if (c>a && c>b) {
      printf("%f is the greatest number.",c);
    }
    else {
      printf("All the numbers are equal.");
    }
    return 0;
    
}