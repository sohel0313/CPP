#include<iostream>
using namespace std;

int main(){
    char val;
    cout<<"Enter char in lowercase to check it is vowel or not : ";
    cin>>val;
    if(val=='a'||val=='e'||val=='i'||val=='o'||val=='u'){
        cout<<"Char is vowel";
    }
    else{
        cout<<"Char is consonent";

    }

}