#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    
    // get array column and row size
    scanf("%d", &n);
    
    // create a multidimensional array with the gotten column and row size 
    int arr[n][n], r = 0, l = 0;

    // scan input array column[j] and row[i] size, this way necessary for hackerrank
    for (int i = 0; i < n; i++)
    {        
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    
    // add left diagonal
    for (int i = 0; i < n; i++)
    {
        l = l + arr[i][i];
    }
    
    // add right diagonal
    for (int i = 0; i < n; i++){
        r = r + arr[i][n-i-1];
    }
    
    // print absolute difference
    int diff = l - r;
    
    printf("%d", abs(diff));
}
