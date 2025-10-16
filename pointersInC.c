#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void update(int *a,int *b) {
    int prvA = *a, prvB = *b;
    int sum = prvA + prvB ;
    int ABS = abs(prvA - prvB);
    *a = sum;
    *b = ABS;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d\n %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
