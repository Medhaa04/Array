#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int sortEven(vector<int>arr){
    int n=arr.size();
    vector<int>even;
    vector<int>odd;
    while(arr.empty()!=true){
        int q=arr.front();
        if(q%2==0) even.push_back(q);
        else odd.push_back(q);
        arr.pop_back();
    }
    sort(even.begin(),even.end());
    sort(odd.end(),odd.begin(),greater<int>());

    for(int i=0;i<even.size();++i){
        arr.push_back(even[i]);
    }
    for(int i=0;i<odd.size();++i){
        arr.push_back(odd[i]);
    }



    
    

    

}