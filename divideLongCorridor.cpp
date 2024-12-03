//leetcode https://leetcode.com/problems/number-of-ways-to-divide-a-long-corridor/description/?envType=company&envId=zomato&favoriteSlug=zomato-all
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int numberOfWays(string corridor) {
        int ans=1;
        int count=0;int temp=0;
        int mod=pow(10,9)+7;
        for(int i=0;i<corridor.size();++i){
            if(count!=2){
                if(corridor[i]=='S') count++;
            }
            else{
                if(corridor[i]=='S'){
                    temp++;
                    ans=ans*temp;
                    ans=ans%mod;
                    count=1;
                    temp=0;
                }
                else temp++;
            }
        }
        if(count!=2) return 0;
        else return ans;
        
        
    }
};