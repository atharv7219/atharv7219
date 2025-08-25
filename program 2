#include <stdio.h>
int checkducknumber();
int main()
  {
    int n,k;
    printf("Enter any number");
    scanf("%d",&n);
    k=checkducknumber( n);
    if(k==1)
    {
        printf("Duck Number");
    }else
    {
        printf("Not a Duck number");
    } 
    return 0;
    }
    int checkducknumber(int x)
    {
        int a,p=1,r;
        a=x;
        while(a>0)
        {
         r=a%10;
         p=p*r;
         a=a/10;
        }
        if(p==0)
        return 1;
        else return 0;
    }


