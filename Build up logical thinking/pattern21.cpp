#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void reverse(int x)
{
   int rev_no;
    rev_no = 0;
    int ld;
    while (x > 0)
    {
        ld = x % 10;
        x = x / 10;
        rev_no = (rev_no) * 10 + ld;
    }
    
    
    cout << rev_no;
}
int main()
{
    int x;
    cout << "enter the number ";
    cin >> x;
    reverse(x);
    return 0;
}