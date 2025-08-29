#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter size of array";
    cin>>n;
    int arr[n];
    cout<<"Enter Array \n";
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        arr[i]=num;

    }
    cout<<"---------Display Array------------"<<endl;

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int search;
    cout<<"Enter a num to search ";
    cin>>search;
    bool result=false;

    for(int i=0;i<n;i++){
        if(arr[i]==search){
            result=true;
        }
        else{
            result=false;
        }
    }
    if(result==true){cout<<"Number is found";}
    else cout<<"Number not found";
}