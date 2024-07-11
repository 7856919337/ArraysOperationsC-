#include<iostream>
#include<limits.h>
using namespace std;
void MinMax(int arr[],int size){
	int min=INT_MAX;
	int max=INT_MIN;
	for(int i=0;i<size;i++){
		if(arr[i]<min){
			min=arr[i];
				}
		if(arr[i]>max){
			max=arr[i];
		}
	}
	cout<<"minimum element is"<<min<<endl;
	cout<<"MAximum element is"<<max<<endl;
	
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
	MinMax(arr,size);
	
	
}
