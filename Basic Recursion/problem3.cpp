#include <bits/stdc++.h>
#include <iostream>
using namespace std;


void num(int x, int n)
{
    if (x < 1){
        return;
    }
    cout << x <<endl;
    num(x-1, n);
}
int main()

{
    int n;
    cout << "Enter the number ";
    cin >> n;
    num(n,n);
}