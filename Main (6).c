//Simple calculator
#include <stdio.h>
int main()
{
    float a;
    float b;
    char operator;
    scanf("%f",&a);
    scanf("%c",&operator);
    scanf("%f",&b);
    if (operator=='+'){
      printf("%f",a+b);
    }
    else if (operator=='-'){
      printf("%f",a-b);
    }
    else if (operator=='*'){
      printf("%f",a*b);
    }  
    else if (operator=='/'){
      if (b!='0')
      printf("%f",a/b);  
      
      else 
        printf("Division by zero is not allowed.");
    }
    else {
      printf("Enter valid number.");
    }
    
    return 0;
}