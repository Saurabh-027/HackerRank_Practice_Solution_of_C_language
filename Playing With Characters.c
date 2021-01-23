#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    char ch;
    char s[100];
    char sen[100];
    scanf("%c", &ch );
    printf("%c",ch);
    printf("\n");
    scanf("%s%*c", &s);
    printf("%s",s); 
    printf("\n");
    gets(sen);
    printf("%s",sen);
    return 0;
}

