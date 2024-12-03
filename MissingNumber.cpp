#include<iostream>
#include<vector>

using namespace std;
class Solution {
  public:

    // Note that the size of the array is n-1
    int missingNumber(int n, vector<int>& arr) {

    int sum=n*(n+1)/2;
    for(int i=0;i<n;++i){
        sum=sum-arr[i];
    }
    return sum;
        // Your code goes here
    }
};