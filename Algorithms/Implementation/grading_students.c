#include <stdio.h>

int main() {    
    int n, grade;
    
    // get number of students
    scanf("%d", &n);
    
  
    for (int i =0; i < n; i++){
        scanf("%d", &grade);
        
        // check to for if the value of grade is less than 38, no rounding occurs as the result will still be a failing grade.
        if (grade < 38) {
            printf("%d\n", grade);
        }
        
        // check for If the difference between the garde and the next multiple of 5 is less than 3, round grade up to the next multiple of 5.
        else if (5 - (grade % 5) < 3){
            grade += 5 - (grade % 5);
            printf("%d\n", grade);
        }
        else {
            printf("%d\n", grade);
        }
    }
}
