#include<iostream>
#include <climits>
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
    int largest=INT_MIN;
    int secondLargest;
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            secondLargest=largest;
            largest=arr[i];
        }
        
    }
    cout<<"Largest "<<largest<<endl;
    cout<<"Second Largest "<<secondLargest<<endl;
    
}