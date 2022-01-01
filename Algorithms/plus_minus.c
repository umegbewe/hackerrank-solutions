#include <stdio.h>

int main() {
    int n; 
    scanf("%d", &n);
  
    int arr[n];
  
    float m = 0, p = 0, z = 0;
  
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);  
      
        if (arr[i] > 0){
            p++;
        }
      
        else if (arr[i] == 0){
            z++;
        }
      
        else {
            m++;
        }     
    }
  
    p = p/n, m = m/n, z = z/n;   
  
    printf("%.6f\n%.6f\n%.6f", p,m,z);  
}
