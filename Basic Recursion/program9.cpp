#include <bits/stdc++.h>
#include <iostream>
#include <cctype>
using namespace std;

string processString(const string &s) {
    string result;
    for (char c : s) {
        if (isalnum(c)) {               
            result += tolower(c);
        }
    }
    return result;
}
bool palindrome(int i, string &s){
    if(i >= s.size() / 2) return true;
    if(s[i] != s[s.size() - i -1]) return false;
    return palindrome(i+1, s);

}
int main(){
    string s;
    cout << "Enter the string ";
    getline(cin, s);

   string processedString = processString(s);

    
    if (palindrome(0, processedString)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}