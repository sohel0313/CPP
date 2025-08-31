#include<iostream>
using namespace std;

int main(){
    
    int n;
    cout<<"Enter a no of students";
    cin>>n;
    int num;
    int sum=0;
    int arr[n];
    for(int i=0;i<n;i++){
    	cout<<"Enter marks";
    	
    	cin>>num;
    	arr[i]=num;
	}
	cout<<"----Array------"<<endl;
	for(int i=0;i<n;i++){
    	cout<<arr[i]<<" ";
    	
	}
	for(int i=0;i<n;i++){
    	sum+=arr[i];
    	
	}
	cout<<"Sum of marks"<<sum<<endl;;
	cout<<"Average"<<sum/n;
	
    
    
    

}
