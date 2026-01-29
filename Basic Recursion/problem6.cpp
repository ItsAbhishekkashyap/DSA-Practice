// sum of first N munber
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int cnt = 0;
void sum(int x, int n){
    if(x > n){
        return;
    }
    cnt += x;
    sum(x+1, n);

}

int sum(int n){
    if(n==0){
        return 0;
    }

    return n + sum(n-1);


}

int main(){
    int n;
    cout << "Enter the number ";
    cin >> n;
    // sum(1,n);
    // cout << "Sum of first N number is " << cnt;

    cout << sum(n);

}