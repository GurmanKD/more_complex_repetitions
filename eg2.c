/*to print all the prime no.s from 1 to 300*/
#include<stdio.h>
int main()
{
    int j, i;
    for(j=1; j<=300; j++)
    {
    if (j==1)
    continue;
    if (j==2)
    printf("%d is a prime no.\n",j);
    for(i=2; i<j; i++)
    {
        if (j%i==0)
        {
        break;
        }
    }
    if (i==j)
        {
            printf("%d is a prime no.\n",j);
        }
    }
    return 0;
}