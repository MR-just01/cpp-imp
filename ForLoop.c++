 //for loop is used when you know in advance how many times you want to execute a statement or a block of statements



 #include<iostream>
 using namespace std;
  int main(){
for (int i = 0; i < 5; i++) {
    cout << i << " ";
}

  }


// Example2

#include <iostream>
using namespace std;

int main() {
    int num, sum = 0;
    cout << "Enter the number of terms until you want to sum: ";
    cin >> num;
    
    for (int i = 1; i <= num; i++) {
        sum += i;  
    }
    
    cout << "Sum of the first " << num << " natural numbers: " << sum << endl;
    return 0;
}

// Output: Sum of first 10 natural numbers: 55
