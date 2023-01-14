#include<stdio.h>
#include<stdlib.h>
int main ()
{
    //automatically all have intial  0 value 
    int *ptr;
    ptr=(int *)calloc(5,sizeof(int ));
    for (int i = 0; i < 5; i++)
    {
        printf("%d",ptr[i]);
    }
    


return 0;
}