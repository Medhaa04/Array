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
    for(int c=0;c<5;c++){
             if(c%2==0){
                 for(int r=0;r<5;r++){
                    cout<<arr[r][c]<<"  ";
                 }
                 cout<<endl;
            }
            else{
                 for(int r=4;r>=0;r--){
                 cout<<arr[r][c]<<"  ";
            }
               cout<<endl;
            }
    }

        
        
    
    
        // for(int c=0;c<5;c=c+2){
        //     for(int r=0;r<5;r++){
        //         cout<<arr[r][c]<<"  ";
        //     }
            
        //      cout<<endl;
        // }
        // cout<<endl;
        // for(int c=1;c<5;c=c+2){
        //     for(int r=4;r>=0;r--){
        //         cout<<arr[r][c]<<"  ";
        //     }
        //     cout<<endl;
        // }

return 0;
}