#include <bits/stdc++.h>
using namespace std;
void print1(int n)
{
    for (int i = 1; i <= n+1; i++)
    {
        for (int j = 1; j < i; j++)
        {
            cout << j;
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