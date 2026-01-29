#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int lcmAndgcd(int a, int b)
{
    while (a > 0 && b > 0)
    {
        if (a > b)
        {
            a = a % b;
        }
        else
        {
            b = b % a;
        }
    }
    if (a == 0)
    {

        return b;
    }
    else
    {

        return a;
    }

    int Lcm = (a * b) / gcd(a, b);
    return Lcm;
}

int main()
{
    int a;
    int b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "GCD of " << a << " and " << b << " is " << gcd(a, b) << endl;
    cout << "LCM of " << a << " and " << b << " is " << lcm(a, b);
}

