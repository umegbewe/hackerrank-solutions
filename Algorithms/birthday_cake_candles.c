#include <stdio.h>

int main() {
    
    int n;
    
    scanf("%d", &n);
    
    int a[n];
    
    int max = 0;
    
    // get highest value in the array
    for (int i=0; i < n; i++) {
        scanf("%d", &a[i]);
        if (max < a[i]) {
            max=a[i];
        }
    }
    
    int cnt = 0;
    
    // iterate through the array if there are any elements equal to the gotten max value
    for (int i = 0; i < n; i++) {
        if (a[i] == max) {
            cnt++;
        }
    }
    
    printf("%d", cnt);
}
