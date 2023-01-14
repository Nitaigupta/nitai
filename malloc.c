#include<stdio.h>
#include<stdlib.h>
int main ()
{
    float *ptr;
    ptr=(float *)malloc(5*sizeof(float ));
ptr[0]=12;
ptr[1]=1;
ptr[2]=16;
ptr[3]=15;
ptr[4]=18;
for (int  i = 0; i < 5 ; i++)
{
    printf("%f\n",ptr[i]);
}



return 0;
}