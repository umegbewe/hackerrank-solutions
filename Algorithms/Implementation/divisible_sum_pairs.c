#include <stdio.h>

int main(){
    int n, k;
    
    scanf("%d %d", &n, &k);
     
    int arr[n];
    int c = 0;
        
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
        for (int j = 0; j < i; j++)
            c += (arr[i] + arr[j]) % k == 0; 
    }
    printf("%d", c);
}
