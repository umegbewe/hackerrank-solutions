#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);
    
  // fixed array length according to constriants for the problem "1 <= n <= 1000"
    int a[1000];
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    int min, max;
    int best = 0;
    int worst = 0;
    
    min = a[0];
    max = a[0];
    
    for (int i=0; i < n; i++){
        if(a[i] > max){
            best++;
            max=a[i];
        }
        if(a[i] < min){
            worst++;
            min=a[i];
        }
    }
  
    printf("%d %d", best,worst);

}
