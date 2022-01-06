#include <stdio.h>

int main() {
  
    int s, t, a, b, m, n;
  
    int r1=0, r2=0;
    scanf("%d %d\n", &s, &t);
    scanf("%d %d\n", &a, &b);
    scanf("%d %d\n", &m, &n);
    
    for(int i = 0; i < m; i++){
        int h;
        scanf("%d", &h);
 
        h += a;
        
        if(h>=s && h<=t){
            r1++;
        }
    }
    
    for (int i = 0; i < n; i++){
        int h;
        scanf("%d", &h);
        
        h += b;
        
        if (h>=s && h<=t){
            r2++;
        }
    }
    
    printf("%d\n%d", r1, r2);
}
