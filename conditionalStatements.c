#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int number;
    scanf("%d", &number);
    if (number >= 1 && number <= 9) {
        if (number == 1) {
            printf("one");
        }
        else if (number == 2) {
            printf("two");
        }
        else if (number == 3) {
            printf("three");
        }
        else if (number == 4) {
            printf("four");
        }
        else if (number == 5) {
            printf("five");
        }
        else if (number == 6) {
            printf("six");
        }
        else if (number == 7) {
            printf("seven");
        }
        else if (number == 8) {
            printf("eight");
        }
        else {
            printf("nine");
        }
        
    }
    else {
        printf("Greater than 9");
    }

    return 0;
}
