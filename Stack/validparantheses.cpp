 #include <iostream>
 #include <stack>
#include<string>
using namespace std;
class solution
{
public:
    bool isvalid(string s)
    {
        stack<char> st;
        for (int i = 0; i < s.size(); i++)
        {
            char ch = s[i];

            if (ch == '(' || ch == '{' || ch == '[')
            {
                st.push(ch);
            }
            else if(ch == ')'||ch == '{' || ch == ']' )  {
                if (st.empty())
                    return false;

                if ((st.top() == '(' && ch == ')') ||
                    (st.top() == '{' && ch == '}') ||
                    (st.top() =='['&& ch == ']')){
                    st.pop();
                }
                else
                {
                    return false;
                }
            }
        }

        return st.empty();
    }
};

// int main()
// {
//     solution obj;
//     string s1 = "({[]})";
//     string s2 = "([)]";

//     cout << s1 << "->" << obj.isvalid(s1) << endl;
//     cout << s2 << "-> " << obj.isvalid(s2) << endl;
//     return 0;
// }


// #include <iostream>
// #include <stack>
// #include <string>   // recommended
// using namespace std;

// class Solution {
// public:
//     // Accept by const-ref to avoid copying
//     bool isValid(const string& s) {
//         stack<char> st;
//         for (char ch : s) {
//             // push opening brackets
//             if (ch == '(' || ch == '{' || ch == '[') {
//                 st.push(ch);
//             }
//             // treat closing brackets
//             else if (ch == ')' || ch == '}' || ch == ']') {
//                 if (st.empty()) return false;
//                 if ((st.top() == '(' && ch == ')') ||
//                     (st.top() == '{' && ch == '}') ||
//                     (st.top() == '[' && ch == ']')) {
//                     st.pop();
//                 } else {
//                     return false;
//                 }
//             }
//             // if you want to allow other characters, skip them:
//             else {
//                 // skip non-bracket chars (or return false if you want)
//                 continue;
//             }
//         }
//         return st.empty();
//     }
// };

// int main() {
//     Solution obj;
//     string s1 = "({[]})";
//     string s2 = "([)]";
//     string s3 = "a(b)c";    // contains non-bracket chars

//     cout << boolalpha; // prints true/false instead of 1/0
//     cout << s1 << " -> " << obj.isValid(s1) << endl;
//     cout << s2 << " -> " << obj.isValid(s2) << endl;
//     cout << s3 << " -> " << obj.isValid(s3) << " (non-bracket chars skipped)" << endl;

//     // Alternatively, print words:
//     cout << s1 << " is " << (obj.isValid(s1) ? "Valid" : "Invalid") << endl;

//     return 0;
// }
