#include <stdio.h>

int main() 
{
    // initialize variables, get input and store into n variable
    int n, i;
    scanf ("%d", &n);
    
    // initialise variable "array" to the number of input stored from "n"
    int array[n];
  
    // iterate over the array and sum each time
    int sum = 0;
  
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
        sum = sum + array[i];
    }
    
    printf("%d", sum);
    return 0;
}
