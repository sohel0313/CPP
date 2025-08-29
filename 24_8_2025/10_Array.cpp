#include<iostream>
using namespace std;

int main(){
    int m,n;
    cout<<"Enter size of array1";
    cin>>n;
    int arr[n];
    cout<<"Enter size of array2";
    cin>>m;
    int arr2[m];
    int result[m+n];
    cout<<"Enter Array1 \n";
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        arr[i]=num;

    }
    cout<<"--------- Array 1------------"<<endl;

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    cout<<"Enter Array2 \n";
    for(int i=0;i<m;i++){
        int num;
        cin>>num;
        arr2[i]=num;

    }
    cout<<"--------- Array 2------------"<<endl;

    for(int i=0;i<m;i++){
        cout<<arr2[i]<<" ";
    }
    cout<<endl;

    for(int i=0;i<n;i++){

        result[i]=arr[i];

    }
    for(int i=0;i<m;i++){

        result[n+i]=arr2[i];

    }

    for(int i=0;i<m+n;i++){
        cout<<result[i]<<" ";
    }

}