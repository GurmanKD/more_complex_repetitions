#include<stdio.h>
int main()
{
    int i, j, k, l=1;
    for(i=1; i<=4; i++)
    {
        for(j=4-i; j>0; j--)
        {
            printf("  ");
        }
        //printf("\n");
        for(k=1; k<=2*i-1; k++)
        {
            if(k%2==0)
            printf("  ");
            else
            {
                printf("%d ",l);
                l++;
            }
        }
        printf("\n");

    }
}