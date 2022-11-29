#include<stdio.h>
int main()
{
    int init_pop, i, pop;
    init_pop=100000;
    for(i=1; i<=10; i++)
    {
        pop=init_pop+0.1*init_pop;
        init_pop=pop;
        printf("%d\n",pop);
    }
    return 0;
}