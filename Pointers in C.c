#include <stdio.h>

void update(int *a,int *b) 
{
    int diff,N;
   int sum =*a+*b;
    printf("%d", sum);
    printf("\n");
    N=*a-*b;
    if (N < 0) 
    { 
        N = (-1) * N; 
    } 
    printf("%d ", N); 
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    return 0;
}

