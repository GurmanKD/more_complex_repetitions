#include<stdio.h>
int main()
{
    int y;
    float i;
    for(y=1; y<=6; y++)
    {
        float x=5.5;
        while(x<=12.5)
        {
            i=2+y+(0.5*x);
            printf("When y=%d and x=%f, i=%f.\n",y,x,i);
            x+=0.5;
        }
    }
}