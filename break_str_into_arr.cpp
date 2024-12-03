#include<iostream>
using namespace std;
int tokenise(char key[],char tokens[][10]){
    int t=0,tc=0,kc=0;
    for(;key[kc]!='\0';kc++,tc++){
        tokens[t][tc]=key[kc];
        if(key[kc]==' '){
            tokens[t][tc]='\0';
            t++;
            tc=-1;

        }
    }
    tokens[t][tc]='\0';
    return t;
}

void print_tokens(char tokens[][10],int n){
    for(int i=0;i<n;i++){
        cout<<tokens[i];
    }
}
int main(){
    
    char key[]="Hello world bye bye noe";
    char tokens[10][10]={0};
    int n=tokenise(key,tokens);
    print_tokens(tokens,n);
   



return 0;
}