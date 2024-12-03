#include<iostream>
using namespace std;
void spiral(int arr[][100],int m,int n){
    int fr=0,fc=0,lr=m-1,lc=n-1;
    while(fr<=lr and fc<=lc){
        //forst r:fc->lc
        for(int col=fc;col<=lc;col++){
            cout<<arr[fr][col]<<" ";
            fr++;
        }
        //last col:fr->lr
        for(int row=fr;row<=lr;row++){
            cout<<arr[row][lc]<<" ";
            lc--;
        }
        //last row:lc->fc
        for(int col=lc;col>=fc;col--){
            cout<<arr[lr][col]<<" ";
            lr--;
        }
        //first col:lr->fr
        for(int row=lr;row>=fr;row--){
            cout<<arr[row][fc]<<" ";
            fc++;
        }
        cout<<endl;
    }
}
int main(){
    //GITHUB

return 0;
}