#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"Enter 3 Angles to check it is triangle or not\n ";
    cin>>a>>b>>c;
    int d=a+b+c;
    if(d==180){
        cout<<"It is a Triangle";
    }
    else{cout<<"It is not a triangle"<<endl;}
}