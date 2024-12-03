#include<iostream>
using namespace std;
class Solution{
  public:
    string convertToRoman(int n) {
        if(n>=1000){
            cout<<"M";
            convertToRoman(n-1000);
        }
        else if(n>=500){
            cout<<"D";
            convertToRoman(n-500);
        }
        // code here
        else if(n>=400){
            cout<<"CD";
            convertToRoman(n-400);
        }
        else if(n>=100){
            cout<<"C";
            convertToRoman(n-100);
        }
        else if(n>=90){
            cout<<"XC";
            convertToRoman(n-90);
        }
        else if(n>=50){
            cout<<"L";
            convertToRoman(n-50);
        }
        else if(n>=40){
            cout<<"XL";
            convertToRoman(n-40);
            
        }
        else if(n>=10){
            cout<<"X";
            convertToRoman(n-10);
        }
        else if(n>=9){
            cout<<"IX";
            convertToRoman(n-9);
        }
        else if(n>=5){
            cout<<"V";
            convertToRoman(n-5);
        }
        else if(n>=4){
            cout<<"IV";
            convertToRoman(n-4);
        }
        else if(n>=1){
            cout<<"I";
            convertToRoman(n-1);
        }
    }
};