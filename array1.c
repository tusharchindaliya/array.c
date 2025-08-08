#include <stdio.h>

int main()
{
    int m[10];
    int s=0;
    float avg=0;
    int i;
    printf("enter 10 elements");
    for(i=0 ; i<10 ; i++)
    {
        scanf("%d", & m[i]);
        
    }
    s= m[0]+ m[1] + m[2] + m[3] + m[4] + m[5] + m[6] + m[7] + m[8] + m[9];
    printf("sum=%d", s);
    
    avg=s/10.0;
    printf("\n avg=%.2f \n", avg);
    
    return 0;
    
}

    
