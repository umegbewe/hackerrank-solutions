#include <iostream>

using namespace std;

int main() {
    int a;
    
    string numbers[10]= {"Greater than 9", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};  
    
    cin >> a;
      
    if (a <= 9) {
    cout << numbers[a] << endl;
    } else {
    cout << numbers[0] << endl;
    }
        
        return 0;
    }
