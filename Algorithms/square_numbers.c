#include <stdio.h>

int main() {
    
    int n[10]; 
    for (int i =0; i < 10; i++) {
     
        int square = (i + 1) * (i + 1);
        n[i] = square;
    }
 
    for (int i = 0; i < 10; i++) {
        printf("%d\n", n[i]);
    }   
}
