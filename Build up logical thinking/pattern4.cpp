#include <bits/stdc++.h>
using namespace std;
void print1(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << i;
        }
        cout << endl;
    }
}
int main()
{
        int n;
        cout << "Enter the numbers of stars";
        cin >> n;
        print1(n);
    
}   