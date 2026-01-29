//  factorial of n
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int factorial(int n){
    vector<long long> result;
    int i=1;
    int fact =1;
    while(fact <= n){
        result.push_back(fact);
        i++;
        
    }

   


}
int main(){
    int n;
    cout << "Enter the number ";
    cin >> n;
    // sum(1,n);
    // cout << "Sum of first N number is " << cnt;

    cout << factorial(n);
}