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
    cout<<"---------Og Array------------"<<endl;

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    cout<<"---------Rev Array------------"<<endl;

    for(int i=n-1;i>=0;i--){
        cout<<arr[i]<<" ";
    }
    


    
    
    
}