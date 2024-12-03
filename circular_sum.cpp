#include<iostream>
using namespace std;
int kadanes(int arr[],int n){
    for(int curr_sum=0;i<n;i++){
        curr_sum+=arr[i];
        int ans=max(curr_sum,ans);
        curr_sum=max(0,curr_sum);
    }
    return ans;
}

int max_cir_sub_sum(int arr[],int n){
    int op1=kadanes(arr,n);
    int total_sum=0;
    for(int i=0;i<n;i++){
        total_sum+=arr[i];
        arr[i]*=-1;
    }
    int op2=total_sum+kadanes(arr,n);
    return max(op1,op2);
}
int main(){

    return 0;
}