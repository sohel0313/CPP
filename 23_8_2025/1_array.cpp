#include<iostream>
using namespace std;

int main(){
    
    int n;
    cout<<"Enter a size of array";
    cin>>n;
    int num;
    int arr[n];
    for(int i=0;i<n;i++){
    	cout<<"Enter of number to store in array";
    	
    	cin>>num;
    	arr[i]=num;
	}
	cout<<"----Array------"<<endl;
	for(int i=0;i<n;i++){
    	cout<<arr[i]<<" ";
    	
	}
    
    
    

}
