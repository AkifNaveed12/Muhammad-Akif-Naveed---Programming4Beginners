#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() 
{
    int starter, terminator;
    scanf("%d\n%d", &starter, &terminator);
    
    for (starter; starter<=terminator; starter++) {
        
        if (starter>=1 && starter<=9) {
            switch (starter) {
                case 1:
                    printf("one");
                    break;
                case 2:
                    printf("two");
                    break;
                case 3:
                    printf("three");
                    break;
                case 4:
                    printf("four");
                    break;
                case 5:
                    printf("five");
                    break;
                case 6:
                    printf("six");
                    break;
                case 7:
                    printf("seven");
                    break;
                case 8:
                    printf("eight");
                    break;
                default: 
                    printf("nine");
            }
        }
        else if (starter%2 == 0) {
        
         if (starter>9 ) {
            printf("even");
          }
        }
        else {
            if (starter>9  ) {
            printf("odd");
          } 
        }
        printf("\n");
    }
    
   
    
  	

    return 0;
}

