#include<stdio.h>

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    int mns = a - b;
    if(mns > 0){
        printf("%d", mns);
    }else{
        printf("%d", 0);
    }

    return 0;
}