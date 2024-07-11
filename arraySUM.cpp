#include<iostream>
using namespace std;
void addingelements(int arr[],int size){
	int sum;
	for(int i=0;i<size;i++){
		sum=sum+arr[i];
	}
	cout<<"Sum of array="<<sum;
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
	addingelements(arr,size);
	
	
}
