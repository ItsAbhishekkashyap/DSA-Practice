#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout << "Enter the length of array :";
    int N;
    cin >> N;
    int arr[N];
    cout << "Enter the elements of array :";
    for (int i = 0; i < N; i++)
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }

    // pre-compute

    map<int, int> mpp;
    for (int i = 0; i < N; i++)
    {
        mpp[arr[i]]++;
    }

    // iterate in the map
    // for(auto it : mpp){
    //     cout << it.first << "->" << it.second << endl;
    // }

    // int q;
    // cout << "Enter the number of queries :";
    // cin >> q;
    // while (q--)
    // {
    //     int number;
    //     cin >> number;
    //     // fetch
    //     cout << mpp[number] << endl;
    // }

    int P = arr[0];
    for (int i = 0; i < N; ++i)
    {
        if (arr[i] > P)
        {
            P = arr[i];
        }
    }
    
    for (int i = 1; i <= N; i++)
    {
        cout << mpp[i] << " ";
    }
    return 0;
}




    // Function to count the frequency of all elements from 1 to N in the array.
    // void frequencyCount(vector<int>& arr, int N, int P) {
    //     map<int, int> mpp;
    // for (int i = 0; i < N; i++)
    // {
    //     mpp[arr[i]]++;
    // }
    
    // P = arr[0];
    // for (int i = 0; i < N; ++i)
    // {
    //     if (arr[i] > P)
    //     {
    //         P = arr[i];
    //     }
    // }
    
    // for (int i = 1; i <= N; i++)
    // {
    //     cout << mpp[i] << " ";
    // }
    
