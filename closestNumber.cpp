//Given two integers n and m. The problem is to find the number closest to n and divisible by m. If there are more than one such number, then output the one having maximum absolute value. If n is completely divisible by m, then output n only. 
#include<iostream>
using namespace std;

    int closestNumber(int N , int M) {
        // code here
        int q=N/M;
        int n1=q*M;
        int n2;
        if(N*M>0){
             n2=M*(q+1);
        }
        else{
             n2=M*(q-1);
        }
        if(abs(N-n1)<abs(N-n2)) return n1;
        return n2;
    }

int main()
{
    int n = 13, m = 4;
    cout << closestNumber(n, m) << endl;
     
    n = -15; m = 6;
    cout << closestNumber(n, m) << endl;
     
    n = 0; m = 8;
    cout << closestNumber(n, m) << endl;
     
    n = 18; m = -7;
    cout << closestNumber(n, m) << endl;
     
    return 0;
} 