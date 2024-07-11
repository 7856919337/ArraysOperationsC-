#include<iostream>
using namespace std;
void search(int arr[],int size){
	int right=size-1;
	int left=0;
	while(left<right){
		swap(arr[left],arr[right]);
		left++;
		right--;
	}
	cout<<"REVERSED ARRY"<<endl;
	int i=0;
	while(i<size){
		cout<<arr[i]<<endl;
		i++;
	}
}
int main(){
	int size;
	cout<<"Enter the size of array=";
	cin>>size;
	int arr[size];
	for(int i=0;i<size;i++){
		cout<<"Enter the "<<i<<" element =";
		cin>>arr[i];
	}
	search(arr,size);
	
	
}
