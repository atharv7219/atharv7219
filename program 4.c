#include <stdio.h>
int main()
{
    int sum=0,i;
    for(i=1;i<=99;i++)
    {
        if(i%3==0 || i %5==0)
        {
            sum=sum+i;
            printf("%d \n",i);
        }
    }
 printf("%d \n",sum);
 return 0;
}
