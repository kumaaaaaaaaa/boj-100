#include <stdio.h>

int main(){
    long long a,b;
    scanf("%lld %lld", &a, &b);
    if(a <= b)
    {
        printf("%lld", (a+b)*(b-a+1)/2);
    }
    else
        printf("%lld", (a+b)*(a-b+1)/2);
    return 0;
}