#include<iostream>
#include<climits>
using namespace std;
int sum_subarr(int arr[],int i,int j){
    int sum=0;
    for(int k=i;k<=j;k++){
        sum=sum+arr[k];
        }
        return sum;
}
int subarr(int arr[],int n){
    int ans=INT_MIN;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int curr_sum=sum_subarr(arr,i,j);
            if(curr_sum>ans){
                ans=curr_sum;
            }
        }
    }
    return ans;
}
int main(){
int n;
cout<<"Enter the size of array:"<<endl;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cout<<"Enter "<<i<<" element of array"<<endl;
    cin>>arr[i];
}
cout<<subarr(arr,n);
return 0;
}