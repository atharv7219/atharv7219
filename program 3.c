#include<stdio.h>
#include<math.h>
float returnsquare(float x);
int main()
    {
   float i;
   printf("Enter any number");
   scanf("%f",&i);
   float sq=returnsquare(i);
   printf("%f\n",sq);
    }
    float returnsquare(float x)
    {
        float p=("%f",pow(x,2));
        return p;
    }
