#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int cnt = 0;
void name(int n)
{

    if (cnt >= n)
    {
        return;
    }
    cnt++;
    cout << cnt << " ";
    name(n);
}
int main()

{
    int n;
    cout << "Enter the number ";
    cin >> n;
    name(n);
}











//{ Driver Code Starts
//Initial Template for C

#include <stdio.h>


// } Driver Code Ends
//User function Template for C


int cnt =0 ;
void printNos(int N)
{
     if (cnt >= N)
    {
        return;
    }
    cnt++;
    printf("%d ", cnt);
    printNos(N);
}

