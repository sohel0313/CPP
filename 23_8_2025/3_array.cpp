#include<iostream>
#include <climits> 
using namespace std;


int main(){
    
    int n;
    cout<<"Enter size of array";
    cin>>n;
    int num;
    int max=0;
    int min=INT_MAX;
    int arr[n];
    for(int i=0;i<n;i++){
    	cout<<"Enter array ";
    	
    	cin>>num;
    	arr[i]=num;
	}
	cout<<"----Array------"<<endl;
	for(int i=0;i<n;i++){
    	cout<<arr[i]<<" ";
    	
	}
	for(int i=0;i<n;i++){
    	if(arr[i]>max){
    		max=arr[i];
		}
	}
	for(int i=0;i<n;i++){
    	if(arr[i]<min){
    		min=arr[i];
		}
	}
	cout<<"Max "<<max;
	cout<<"Min "<<mix;


    
    

}

