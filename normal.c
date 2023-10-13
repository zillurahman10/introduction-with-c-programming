#include<stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    for(long long int i = 1; i <= a; i++){
        i = (i * 2);
        printf("%lld", i * i); 
    }
    return 0;
}

// 1. (2 * 2)^2 = 16
// 2. (4 * 2)^2 = 64
// 3. (8 * 2)^2 = 256