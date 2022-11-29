/*to find the sum of first 7 terms of the series
1/1! + 2/2! + 3/3!....*/
#include<stdio.h>
int main()
{
    int i, j;
    float fact=1.0;
    float sn=0.0;
    for(i=1; i<=7; i++)
    {
        for(j=1; j<=i; j++)
        {
            fact=fact*j;
        }
    sn=sn+i/fact;
    }
    printf("%f",sn);
    return 0;
}