#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
   
    char *token = strtok(s, " "); 
    
    
    while (token != NULL) {
        printf("%s\n", token); // Print the token followed by a newline
        token = strtok(NULL, " "); // Get the next token
    }
    
    free(s);
    return 0;
}
