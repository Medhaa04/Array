//kadane's
#include<iostream>
#include<climits>
using namespace std;
int kadane(int arr[],int n){
    int curr_sum=0;
    int ans=INT_MIN;
    for(int i=0;i<n;i++){
       curr_sum+=arr[i];            //curr_sum=curr_sum+arr[i];
        if(curr_sum>ans){
            ans=curr_sum;
        }
        if(curr_sum<0){
            curr_sum=0;
        }
    }
    return ans;
}
int main(){
    int n;
    cout<<"Enter size of the array:"<<endl;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter "<<i<< " element of the array:"<<endl;
        cin>>arr[i];
     }

    cout<<"Max sum is="<<kadane(arr,n); 


return 0;
}