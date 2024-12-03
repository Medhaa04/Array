// Given three sorted arrays in non-decreasing order, print all common elements in these arrays.
// Note: In case of duplicate common elements, print only once.
#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

vector<int>commanElement(vector<int>&A,vector<int>&B,vector<int>&C){
        unordered_map<int,int>mp;
        vector<int>comman;
        for(int ele:A){
            mp[ele]=1;
        }
        for(int ele:B){
            if(mp[ele]==1 && mp.find(ele)!=mp.end()) mp[ele]=2;
        }
        for(int ele:C){
            if(mp[ele]==2 and mp.find(ele)!=mp.end()) mp[ele]=3;
        }
        for(auto ele:mp){
            if(ele.second==3) comman.push_back(ele.first);

        }
        return comman;
    }




int main()
{
    // Sample Input
    vector<int> A = { 1, 5, 10, 20, 30 };
    vector<int> B = { 5, 13, 15, 20 };
    vector<int> C = { 5, 20 };

    vector<int> ans = commanElement(A,B,C);

    cout << "Common elements: ";

    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }

    return 0;
}

