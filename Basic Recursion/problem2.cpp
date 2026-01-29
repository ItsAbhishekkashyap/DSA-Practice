#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int cnt = 0;
void num(int n)
{

    if (cnt >= n)
    {
        return; 
    }
    cnt++;
    cout << cnt << " ";
    num(n);
}
int main()

{
    int n;
    cout << "Enter the number ";
    cin >> n;
    num(n);
}