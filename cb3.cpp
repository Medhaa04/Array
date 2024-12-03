//fibonacii pattern
#include<iostream>
using namespace std;
int fibon(int i){
    if(i==0 || i==1){
        return i;
    }

    int first=fibon(i-1);
    int second=fibon(i-2);
    int reqd=first+second;
    return reqd;

	 

}
int loop(int n){
	for(int i=0;i<=(n*(n+1))/2;i++){

	}
}
int main() {
	int n;
	cin>>n;
	loop(n);
	return 0;
}