#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,k,l,a,b;
    for(i=1; i<=30 ;i++)
    {
        for(j=1; j<=30; j++)
        {
            for(k=1; k<=30 ;k++)
            {
                for(l=1; l<=30; l++)
                {
                    if ((i != j) && (i != k) && (i != l) && (b != k) && (b != l)&& (k != l))
                    {
                        int x = pow(i, 3) + pow(j, 3);
                        int y = pow(k, 3) + pow(l, 3);
                        if ((x) == (y))
                            printf("%d %d %d %d\n",i,j,k,l);
                    }
                }
            }
        }
    }
    return 0;
}