#include <stdio.h>

int main() {
    
    int n = 5;
    
    int a[5];
    
    long sum = 0;
    
    for (int i = 0; i < n; i++){
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }
    
    int max = a[0];
    int min = a[0];
    
    for (int i = 0; i < n; i++){
        if (a[i] > max) {
            max=a[i];
        }
        if (a[i] < min) {
            min=a[i];
        }
    }
    int x = sum - max;
    int y = sum - min;
    
    printf("%ld %ld", x, y);
    

}
