//Given an array of positive integers arr[] and an integer x, The task is to find all unique combinations in arr[] where the sum is equal to x. 
// The same repeated number may be chosen from arr[] an unlimited number of times. Elements in a combination (a1, a2, …, ak) must be printed in non-descending order. (ie, a1 <= a2 <= … <= ak). If there is no combination possible print “Empty”.
#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int findNums(vector<vector<int>>&res,vector<int>&r,int sum,vector<int>&arr,int i){
    if(sum==0) {
        res.push_back(r);
        return;
    }
    while(i<arr.size() && sum-arr[i]>=0){
        r.push_back(arr[i]);
        findNums(res,r,sum-arr[i],arr,i);
        i++;
        r.pop_back();
    }



}
vector<vector<int>> combinationSum(vector<int> arr,int sum){
    sort(arr.begin(),arr.end());
    arr.erase(unique(arr.begin(),arr.end()),arr.end());

    vector<int>r;
    vector<vector<int>>res;
    findNums(res,r,sum,arr,0);
    return res;

}
int main()
{
    vector<int> ar;
    ar.push_back(2);
    ar.push_back(4);
    ar.push_back(6);
    ar.push_back(8);
    int n = ar.size();
 
    int sum = 8; // set value of sum
    vector<vector<int> > res = combinationSum(ar, sum);
 
    // If result is empty, then
    if (res.size() == 0) {
        cout << "Empty";
        return 0;
    }
 
    // Print all combinations stored in res.
    for (int i = 0; i < res.size(); i++) {
        if (res[i].size() > 0) {
            cout << " ( ";
            for (int j = 0; j < res[i].size(); j++)
                cout << res[i][j] << " ";
            cout << ")";
        }
    }
  return 0;
}