#include<iostream>
using namespace std;
void TripletSum(int arr[],int n,int target){
	for(int i=0;i<n-2;i++){
		for(int j=i+1;j<n-1;j++){
			for(int k=j+1;k<n;k++){
				if(arr[i]+arr[j]+arr[k]==target){
					cout<<arr[i]<<", "<<arr[j]<<" and "<<arr[k]<<endl;
				}
			}
		}
	}
}
int main() {
	int n;
	cin>>n;
	int arr[10];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
    int target;
    cin>>target;
	TripletSum(arr,n,target);
	return 0;
}
