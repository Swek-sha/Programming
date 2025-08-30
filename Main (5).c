//vowel or consonant
#include <stdio.h>
int main()
{
    char x;
    char a;
    char e;
    char i;
    char o;
    char u;
    scanf("%c",&x);
    if (x=='a'||x=='e'||x=='i'||x=='o'||x=='u'){
      printf("%c is a vowel.",x);
    }
    else if (x!='a'||x!='e'||x!='i'||x!='o'||x!='u'){
      printf("%c is a consonant.",x);
    }
    return 0;
}