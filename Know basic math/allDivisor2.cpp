#include <bits/stdc++.h>
#include <iostream>
using namespace std;
void printDivisor(int n)
{
    vector<int> ls;

    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            ls.push_back(i);
            if ((n / i) != i)
            {
                ls.push_back(n / i);
            }
        }
    }

    cout << "\nDivisors in ascending order: "; // Sorting the vector to print in ascending order.  // O(n log n) time complexity.  // If you want to keep the original order, remove the sort function.  // The output will be same.  // Here, we used sort to demonstrate the sorting functionality.  // If you want to print the divisors in the
    sort(ls.begin(), ls.end());
    for (auto it : ls)
        cout << it << " ";
}

void sumOfDivisors(int n)
{
    long long sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += (n / i) * i;
    }
    cout << "Sum is " << sum;
}

int main()
{
    int n;
    cout << " Enter no. ";
    cin >> n;
    sumOfDivisors(n);
    printDivisor(n);
    return 0;
}