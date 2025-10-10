#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    char ch,s[30],sen[99];
    scanf("%c",&ch);  
    scanf("%s",&s);
    scanf("\n%[^\n]%*c",&sen);
    printf("%c\n%s\n%s",ch,s,sen);
    return 0;
}
