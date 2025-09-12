// #include<iostream>
// using namespace std;
// int main(){
//     int a,b,temp;
//     cout<<"enter value of a and b :";
//     cin>>a>>b;
//     a=a+b;
//     b= a-b;
//     a=a-b;
//     cout<<"after swapping the value of a and b : "<<a<<" "<<b<<endl;
//     return 0 ;

// }

// #include <iostream>
// using namespace std;

// int fibonacci(int n) {
//     if (n == 0) return 0;
//     if (n == 1) return 1;
//     return fibonacci(n - 1) + fibonacci(n - 2);
// }

// int main() {
//     int n;
//     cout << "Enter the number of terms: ";
//     cin >> n;

//     cout << "Fibonacci Series: ";
//     for (int i = 0; i < n; i++) {
//         cout << fibonacci(i) << " ";
//     }

//     // cout << endl;
//     return 0;


// }

// #include <iostream>
// using namespace std;

// int main() {
//     int num, original, reversed = 0, digit;

//     cout << "Enter a number: ";
//     cin >> num;

//     original = num;  

//     while (num > 0) {
//         digit = num % 10;             
//         reversed = reversed * 10 + digit;  
//         num = num / 10;                
//     }

//     if (original == reversed)
//         cout << original << " is a Palindrome Number." << endl;
//     else
//         cout << original << " is NOT a Palindrome Number." << endl;

//     return 0;
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int terms, sum = 0 ;
//     cout<<"enter the first natural number ";
//     cin>>terms;
//     for(int i = 1 ;i<=terms; i++ ){
//         sum = sum+i;
//     }

//     cout<<"the sum of first "<<terms<< " is :" <<sum<<endl;
//     return 0 ;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     int choice;
//     cout << "Choose a shape to find area:\n";
//     cout << "1. Circle\n";
//     cout << "2. Rectangle\n";
//     cout << "3. Triangle\n";
//     cout << "Enter your choice: ";
//     cin >> choice;

//     switch (choice) {
//         case 1: {
//             float radius;
//             cout << "Enter radius of circle: ";
//             cin >> radius;
//             cout << "Area of Circle = " << 3.14 * radius * radius << endl;
//             break;
//         }
//         case 2: {
//             float length, breadth;
//             cout << "Enter length and breadth of rectangle: ";
//             cin >> length >> breadth;
//             cout << "Area of Rectangle = " << length * breadth << endl;
//             break;
//         }
//         case 3: {
//             float base, height;
//             cout << "Enter base and height of triangle: ";
//             cin >> base >> height;
//             cout << "Area of Triangle = " << 0.5 * base * height << endl;
//             break;
//         }
//         default:
//             cout << "Invalid choice!" << endl;
//     }

//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int a,b,c;
//     cout<<"enter the value of a , b and c ";
//     cin>>a>>b>>c;
//     if(a<b && a<c){
//      cout<<a<< " is the smallest number"; 
//     }
//     else if(b<a && b<c) {
//        cout<<b<< " is the smallest number" ;
//     } 
//      else if(c<a && c<b) {
//        cout<<c<< " is the smallest number" ;
//     } 
//     else{
//         cout<<"all are eqaul";
//     }
//     return 0 ;
// }