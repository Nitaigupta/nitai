#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int *ptr,n;
    printf("enter the number\n");
    scanf("%d",&n);
    ptr=(int *)calloc(2,sizeof(int));
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&ptr[i]);
    }
    
    ptr=realloc(ptr,n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&ptr[i]);
    }
    for (int i = 0; i < 8; i++)
    {
        printf("%d",ptr[i]);
    }
    


return 0;
}