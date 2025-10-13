#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    scanf("%d", &n);
   
   //side lenghts calculation formula
   int l = (2 * n) -1;
   //center calcultion formula
   int c = n - 1;
   
   //outerloop for rows i
   for (int i = 0; i<l; i++) {
    //innerloop for rows j
    for (int j = 0; j<l; j++) {
        //dis from center calculation
        int rowDiff = abs(c - i);
        int colDiff = abs(c - j);
        
        //max value calculations 
        int maxValue = ( rowDiff > colDiff ) ? rowDiff : colDiff;
        
        int value = maxValue + 1;
        printf("%d ", value);
    }
    printf("\n");
   }
    return 0;
}
