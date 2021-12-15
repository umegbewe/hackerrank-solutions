#include<stdio.h>

int main(void)
{
    
    int n;
    
    do 
    {
    scanf("%d", &n);
    }
    
    while (n > 100 || 1 > n);
    
    for (int i = 1; i <= n; i++)
    {  
        for (int c = n-i; c > 0; c--)
        {
            printf(" ");
        }
        for (int d = 1; d <= i; d++)
        {
            printf("#");
        }
        printf("\n");
    }
    
    return 0;
}
