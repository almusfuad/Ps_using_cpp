#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }

    long long int prefixSum[n];
    prefixSum[0] = arr[0];

    for(int i=1; i<n; i++) {
        prefixSum[i] = arr[i] + prefixSum[i-1];
    }

    for(int i=n-1; i>=0; i--) {
        cout<<prefixSum[i]<<" ";
    }
    return 0;
}