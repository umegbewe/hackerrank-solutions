#include <stdio.h>
#include <string.h>

int main() {
    
    int hr, mn, ss;
    char t;
    
    // get hour, minute, second and suffix
    scanf("%d:%d:%d%c", &hr, &mn, &ss, &t);
    
    // Important for a subtle test case
    hr = hr % 12;
  
    if (t == 'P') {
        hr += 12;
    }
      
    printf("%02d:%02d:%02d",  hr,mn,ss);
    
    return 0;
}
