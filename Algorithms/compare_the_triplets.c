// https://www.hackerrank.com/challenges/compare-the-triplets

#include <stdio.h>

int main() {
    
    // declare array size
    int alice[3];
    int bob[3];
    
    //get arrays
    scanf("%d %d %d", &alice[0], &alice[1], &alice[2]);
    scanf("%d %d %d", &bob[0], &bob[1], &bob[2]);
    
  // initialise both alice and bob's score to 0
    int ascore = 0;
    int bscore = 0;
    
    // iterate through array and increment
    for (int i = 0; i < 3; i++) {
        if (alice[i] > bob[i])
            ascore++;
        if (bob[i] > alice[i])
            bscore++;
    }
    
    printf("%d %d", ascore, bscore);
    
    return 0;
}
