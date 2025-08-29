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
    cout<<"--------- Array------------"<<endl;

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    for(int i=0;i<n;i++){
        for(int j=0;j<n-1-i;j++){

            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
        }
    }
    }

    cout<<"--------- Array After using Bubble Sort------------"<<endl;

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    
    }