#include <stdio.h>
int main()
{
    int i;
    for(i=1; i<=24; i++)
    {
        if(i>=1&&i<=11)
        printf("%d am\n",i);
        else if(i==12)
        printf("%d noon\n",i);
        else if(i>=13&&i<=23)
        printf("%d pm\n",i);
        else if(i==24)
        printf("%d midnight\n",i);
    }

return 0;
}