#include <stdio.h>

int main() {
    
    int n, k, i, ans;
    scanf("%d %d", &n, &k);
    
    int arr[n];
    
    // scan array
    for (i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    } 
    
    int max = arr[0];
 
    // find highest element in array
    for (i = 0; i < n; i++){
        if (max < arr[i])
        max = arr[i];   
    }
 
    if (max > k) {
        ans = max - k;
    }
  
    printf("%d", ans);
  
}
