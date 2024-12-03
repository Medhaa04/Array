#include<iostream>
using namespace std;
int main(){
     int arr[5][5]={
        {1,2,3,4,5},
        {6,7,8,9,10},
        {11,12,13,14,15},
        {16,17,18,19,20},
        {21,22,23,24,25}
    };
    for(int r=0;r<5;r++){
        for(int c=0;c<5;c++){
            cout<<arr[r/*=0*/][c];
        }
    }
    while(int c=4){
        for(int r=1;r<5;r++ ){
            cout<<arr[r][c/*=4*/];
        }

    }

    while(int r=4 ){
        for(int c=5;c>0;c--){
            cout<<arr[r/*=4*/][c];
        }
    }
    while(int c=0){
        for(int r=3;c>0;c--){
            cout<<arr[r][c/*=0*/];
        }
    }
    while(int r=1){
        for(int c=1;c<4;c++){
            cout<<arr[r/*=1*/][c];
        }
    }
    while(int c=3){
        for(int r=2;r<4;r++){
            cout<<arr[r][c/*=3*/];
        }
        
    }
    while(int r=3){
        for(int c=2;c>0;c--){
            cout<<arr[r/*3*/][c];
        }
    }
    cout<<arr[2][1];
    cout<<arr[2][2];

return 0;
}