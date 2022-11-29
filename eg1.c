#include<stdio.h>
int main()
{
    int n, i;
    printf("enter a no.");
    scanf("%d",&n);
    if (n==1)
    printf("%d is neither a prime no. nor a composite no.",n);
    if (n==2)
    printf("%d is a prime no.",n);
    for(i=2; i<n; i++)
    {
        if (n%i==0)
        {
        printf("%d is not a prime no.",n);
        break;
        }
    }
    if (i==n)
        {
            printf("%d is a prime no.",n);
        }
    return 0;
}