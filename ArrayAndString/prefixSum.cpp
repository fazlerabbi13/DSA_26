#include<bits/stdc++.h>
using namespace std;

vector<int> prefixSum(vector<int> &arr){
    int n = arr.size();

    vector<int> prefSum(n);

    prefSum[0] = arr[0];

    for(int i = 1; i < n; i++){
        prefSum[i] = prefSum[i - 1] + arr[i];
    }

    return prefSum;
}

int main(){
    vector<int> arr = {10, 5, 20, 7, 19};
    vector<int> prefSum = prefixSum(arr);

    for(auto i : prefSum){
        cout << i << " ";
    }

    return 0;
}