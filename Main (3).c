//leap year check
#include <stdio.h>
int main()
{
    int y;
    scanf("%d",&y);
    if (y%4==0){
      printf("%d is a leap year.",y);
    }
    else if (y%4!=0){
      printf("%d is not a leap year.",y);
    }
    else {
      printf("Enter valid number.");
    }
    return 0;
}