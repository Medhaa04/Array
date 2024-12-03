//Ques-
#include<iostream>
using namespace std;
bool compare_string(char a1[],char a2[]){
    for(int j=0;a2[j]!='\0' or a1[j] != '\0';j++){
            if(a1[j]!=a2[j]){
                return false;
            }
        }
        return true;

}
void search_char_arr(char arr[][10],int n,char *key){
    for(int i=0;i<n;i++){
        
            if(compare_string(arr[i],key)){    //if(!strcmp(arr[i],key))
                return i;;
            }
        
    }
    return -1;

}
int main(){
    char arr[][10]={
        "Dell",
        "Coding",
        "Hell",
        "Bell",
        "Tell",
        "Well",
        "Sell"
    };
    int n=sizeof(arr)/sizeof(arr[0]);  //size of row
    char key[]="Tell";
    cout<<search_char_arr(arr,n,key);

return 0;
}