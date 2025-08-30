//Divisibility check
#include <stdio.h>
int main()
{
    int a;
    int b;
    scanf("%d",&a);
    scanf("%d",&b);
    if (a%b==0){
      printf("It is fully divisible.");
    }
    else {
      printf("It is not fully divisible.");
    }
    return 0;
}