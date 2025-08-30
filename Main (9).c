//Uppercase or Lowercase
#include <stdio.h>
int main()
{
    char alpha;
    scanf("%c",&alpha);
    if (alpha>='A' && alpha<='Z'){
      printf("Uppercase");
    }
    else if (alpha>='a' && alpha<='z'){
      printf("Lowercase");
    }
    else {
      printf("Enter alphabet.");
    }
    return 0;
}