// from 1 to N by backtracking

#include <bits/stdc++.h>
#include <iostream>
using namespace std;


void num(int x, int n)
{
    if (x < 1){
        return;
    }
    num(x-1, n);
    cout << x <<endl;
}
int main()

{
    int n;
    cout << "Enter the number ";
    cin >> n;
    num(n,n);
}