#include<iostream>
using namespace std;
int uniqueElement(int arr[],int size);
int main(){
	int size;
	cout<<"Enter the size of array=";
	cin>>size;
	int arr[size];
	for(int i=0;i<size;i++){
		cout<<"enter the "<<i<<" element of array";
		cin>>arr[i];
	}
	uniqueElement( arr, size);
}
int uniqueElement(int arr[],int size){
	int ans=0;
	for(int h=0;h<size;h++){
		ans=ans^arr[h];
	}

cout<<ans;}
