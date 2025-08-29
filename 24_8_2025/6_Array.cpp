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

    int oddcnt=0;
    int evencnt=0;

    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            evencnt+=1;

        }
        else oddcnt+=1;
    }
    cout<<"Odd Count"<<oddcnt<<endl;
    cout<<"Even Count"<<evencnt;


    }