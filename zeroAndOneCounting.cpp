#include<iostream>
using namespace std;
void found(int arr[],int size){
	int Acount=0;
	int Bcount=0;
	for(int i=0;i<size;i++){
		if(arr[i]==1){
			Acount=Acount+1;
		}
		if(arr[i]==0){
			Bcount=Bcount+1;
		}
	}
	cout<<"No of 1 in array="<<Acount<<endl;
	cout<<"No of 0 in array="<<Bcount;

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
	found(arr,size);
	
	
}
