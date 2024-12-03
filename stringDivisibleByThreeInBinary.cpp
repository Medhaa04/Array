// Write an Efficient Method to Check if a Number is Multiple of 3
#include<iostream>
#include<string>
using namespace std;
class Solution{
    public:
    int DivisibleByThree(string s){
        int n=s.length();
        int odd_count=0;
        int even_count=0;
        for(int i=0;i<n;++i){
            if(s[i]=='1'){
                if(i%2==0) even_count++;
                else odd_count++;
            }
        }
        if((even_count-odd_count)%3==0) return 1;
        else return 0;

    }
};