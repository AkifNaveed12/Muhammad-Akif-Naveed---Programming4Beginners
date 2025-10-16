#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include <ctype.h> 

int main() {
    
    char s[1001]; 
    
   
    int counts[10] = {0}; 
    
   
    if (scanf("%s", s) != 1) {
        return 1; // Handle read error
    }
     int len = strlen(s);
    
  
    for (int i = 0; i < len; i++) {
        char current_char = s[i];
        
        
        if (isdigit(current_char)) {
            
            //  Convert the character digit to its corresponding integer index
            // e.g., '1' - '0' = 1 (integer)
            int digit_index = current_char - '0'; 
            
            //  Increment the count at that index
            counts[digit_index]++;
        }
        
    }
    
    //  Printing the frequencies 
    for (int i = 0; i < 10; i++) {
        printf("%d", counts[i]);
        
        // Print a space after every digit except the last one
        if (i < 9) {
            printf(" ");
        }
    }
    printf("\n"); 
    
    return 0;
}
