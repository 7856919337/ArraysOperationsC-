#include<iostream>
using namespace std;
void search(int arr[],int size,int target){
	bool flag=0;
	for(int i=0;i<size;i++){
		if(arr[i]==target){
			cout<<"element is found at "<<i<<"index";
			flag=1;
			break;
		}
	}
	if(flag==0){
		cout<<"Element not found";
	}
}
int main(){
	int size;
	cout<<"Enter the size of array=";
	cin>>size;
	int arr[size];
	int target;
	cout<<"Enter the element you want to find=";
	cin>>target;
	for(int i=0;i<size;i++){
		cout<<"Enter the "<<i<<" element =";
		cin>>arr[i];
	}
	search(arr,size,target);
	
	
}
