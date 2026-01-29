#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int minJumps(vector<int>& arr){
    int n = arr.size();
    if(n==0 || arr[0]==0){
        return -1;
    }

    int jumps = 0;
    int maxreach = 0;
    int currentEnd = 0;
    for(int i = 0; i<n-1; i++){
        maxreach = max(maxreach, i+arr[i]);
        if( i == currentEnd){
            jumps++;
            currentEnd = maxreach;

            if(currentEnd <= i){
                return -1;
            }
        }

        if(currentEnd >= n-1){
            break;
        }
    }

    return jumps;

}
int main(){
    vector<int> arr = {1,3,5,8,9,2,6,7,6,8,9} ;
    int result = minJumps(arr);
    if (result == -1) {
        cout << "Cannot reach the end of the array." << endl;
    } else {
        cout << "Minimum number of jumps to reach the end is: " << result << endl;
    }
    
    return 0;
}