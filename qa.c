/*to print multiplication table of no. entered by the user*/
#include<stdio.h>
int main()
{
    int n, i;
    printf("enter a no.");
    scanf("%d",&n);
    for(i=1; i<=10; i++)
    {
        printf("%d * %d = %d\n",n,i,n*i);
    }
    return 0;
}