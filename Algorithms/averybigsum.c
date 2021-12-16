// https://www.hackerrank.com/challenges/a-very-big-sum/
#include <stdio.h>

int main() 
{
    int n;
    
    // get array size
    scanf("%d", &n);
    
    // create an array the the gotten size and initialise sum to zero
    long long ar[n], sum = 0;
    
    // scan through elements in array
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &ar[i]);
    }
    
    // sum elements in array
    for (int i = 0; i < n; i++)
    {
        sum = sum + ar[i];
    }
    
    // print array 
    printf("%lld", sum);
    
    return 0;
}
