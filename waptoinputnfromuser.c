#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int n,*ptr;
    printf("enter the  value of n\n");
    scanf("%d",&n);
    ptr=(int *)calloc(5*sizeof(int));
    
   
    for (int i = 0; i < n; i++)
    {
        printf("%d",ptr[i]);
    }
    
    
    



return 0;
}