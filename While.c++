//while loop is used when the number of iterations is not known in advance, and the loop continues as long as the condition remains true

 #include<iostream>
using namespace std;
int main(){
int i = 0;
while (i < 5) {
    cout << i << " ";
    i++;
}
}



// Example2
//while loop counts down from n to 1:

#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter the number of count ";
    cin>>n;
    while (n> 0) {
        cout << n << " ";
        n--;
    }
    cout << "Endofloop" << endl;
    return 0;
}



