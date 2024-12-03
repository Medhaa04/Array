#include<iostream>
using namespace std;
void search(int arr[][100],int m,int n ,int key){
    int row=0,col=n-1;
    while(row<m and col>=0){
        // cout<<
        if (arr[row][col]==key){
            cout<<row<<" "<<col<<endl;
            return;
        }
        else if(key<arr[row][col]){
            col--;
        }
        else if(key>arr[row][col]){
            row++;
        }
    }
    cout<<"key not found";
}
int main(){
    int arr[100][100]={
        {1,3,5,7},
        {8,10,15,16},
        {9,11,17,20}
    };
    int m=3;int n=4;

    int key=10;
    search(arr,m,n,key);

return 0;
}