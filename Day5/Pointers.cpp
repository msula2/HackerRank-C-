#include <stdio.h>
#include <math.h>
void update(int *a,int *b) {
    // Complete this function    
    int aVal = *a;
    int bVal = *b;
    
    *a = aVal + bVal;
    *b = abs(aVal - bVal);
    
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
