#include<stdio.h>
int main()
{
    long int a,b;
    long long int result = 1;
    scanf("%ld %ld",&a,&b);
    result = a * b;
    printf("%lld",result);
    return 0;
}