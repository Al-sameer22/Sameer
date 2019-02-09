#include <stdio.h>
int main()
{
    int leap;
    scanf("%d",&leap);
    if((leap%4)==0)
    {
        if(leap%100)
        {
            if(leap%400)
            {
                printf("yes");
            }
            else
            {
                printf("no");
            }
            
        }
        else
            {
                printf("yes");
            }
    }
    else
    printf("no");
    return 0;
}
