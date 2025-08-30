//Grade calculation
#include <stdio.h>
int main()
{
    float a;
    scanf("%f",&a);
    if (a>=90 && a<=100){
      printf("Grade: A");
    }
    else if (a>=80 && a<90){
      printf("Grade: B");
    }
    else if (a>=70 && a<80){
      printf("Grade: C");
    }
    else if (a>=60 && a<70){
      printf("Grade: D");
    }
    else if (a>=50 && a<60){
      printf("Grade: E");
    }
    else if (a>=0 && a<50){
      printf("Grade: F");
    }
    else {
      printf("Enter between 100 to 0.");
    }
    return 0;
}