#include <stdio.h>

int main()
{
    int ar[5];
    int i;
    printf("enter 5 elements");
    for(i=0 ; i<5 ; i++)
    {
        scanf("%d", & ar[i]);
        
    }
    for(i=0 ; i<5 ; i++)
    {
        printf("%d ",ar[i]);
    }
    
    return 0;
}