#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int find_nth_term(int n, int a, int b, int c) {
  if (n == 1) {
        return a;
    } else if (n == 2) {
        return b;
    } else if (n == 3) {
        return c;
    } 
    
   
    int s_n_minus_3 = a; // Represents S(1)
    int s_n_minus_2 = b; // Represents S(2)
    int s_n_minus_1 = c; // Represents S(3)
    int s_n;             // Will hold the calculated S(i)
    
    //  Loop from i = 4 up to n
    for (int i = 4; i <= n; i++) {
        // Calculate the current term: S(i) = S(i-1) + S(i-2) + S(i-3)
        s_n = s_n_minus_1 + s_n_minus_2 + s_n_minus_3;
        
        //  Shift the variables forward for the NEXT iteration
        // The old S(i-2) becomes the new S(i-3)
        s_n_minus_3 = s_n_minus_2; 
        
        // The old S(i-1) becomes the new S(i-2)
        s_n_minus_2 = s_n_minus_1;
        
        // The newly calculated S(i) becomes the new S(i-1)
        s_n_minus_1 = s_n; 
    }
    
    
    return s_n;
}

int main() {
    int n, a, b, c;
  
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);
 
    printf("%d", ans); 
    return 0;
}

//other way
// int find_nth_term(int n, int a, int b, int c) {
//     // 1. Base Cases: Handle n = 1, n = 2, and n = 3
//     if (n == 1) {
//         return a;
//     } else if (n == 2) {
//         return b;
//     } else if (n == 3) {
//         return c;
//     } 
    
//     // 2. Recursive Step: Handle n > 3
//     else {
//         // The nth term is the sum of the three preceding terms.
//         return find_nth_term(n - 1, a, b, c) + 
//                find_nth_term(n - 2, a, b, c) + 
//                find_nth_term(n - 3, a, b, c);
    }
}
