#include <stdio.h>

int main() 
{
    int m[10] , se ;
    int mx=0;
    int mn=0;
    printf("enter 10 values");
    
    for(int i=0 ; i<10 ; i++)
    {
        scanf("%d", &m[i]);
        
    }
    
    mx=m[0];
    
    for(int i=0 ; i<10 ; i++)
    {
        if(m[i]>mx)
        mx=m[i];
        
    }
    
    printf("%d",mx);
    
    mn=m[0];
    
    for(int i=0 ; i<10 ; i++)
    {
        if(m[i]<mn)
        mn=m[i];
        
    }
    printf("\n%d",mn);
    return 0;
}

