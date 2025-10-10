#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int num1, num2;
    float num3, num4;
    
    scanf("%d %d", &num1, &num2);
    scanf("%f %f", &num3, &num4);
    
    int sumOfInt = num1 + num2;
    int diffOfInt = num1 - num2;
    
    float sumOfFloat = num3 + num4;
    float diffOfFloat = num3 - num4;
    
    printf("%d %d\n%.1f %.1f", sumOfInt, diffOfInt, sumOfFloat, diffOfFloat);
    
    return 0;
}
