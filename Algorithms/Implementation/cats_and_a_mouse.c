#include <stdio.h>
#include <stdlib.h>

int main() {
    int q;
    
    scanf("%d", &q);
    
    for (int i = 0; i < q; i++){
        int x, y, z;
            
        scanf("%d %d %d", &x, &y, &z);
        
        int a = abs(x -z);
        int b = abs(y -z);
        
        if (a < b){
            printf("Cat A\n");
        }
        else if (b < a) {
            printf("Cat B\n");
        }
        else {
            printf("Mouse C\n");
        }
        
        
    }
    return 0;
}
