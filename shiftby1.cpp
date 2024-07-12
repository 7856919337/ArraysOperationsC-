//#include<iostream>
//using namespace std;
//int main(){
//	int arr[6]={10,20,30,40,50,60};
//	int temp=arr[5];
//	int i=5;
//	while(i!=0){
//		arr[i]=arr[i-1];
//		i--;
//	}
//	arr[0]=temp;
//	int j=0;
//	while(j<6){
//		cout<<arr[j]<<" ";
//		j++;
//		
//	}
//}
//#include<iostream>  //shifting left side
//using namespace std;
//int main(){
//	int arr[6]={10,20,30,40,50,60};
//	int temp=arr[0];
//	for(int i=0;i<6;i++){
//		arr[i]=arr[i+1];
//	}
//	arr[5]=temp;
//		for(int i=0;i<6;i++){
//		cout<<arr[i]<<" ";
//	
//}}
#include<iostream>  //shifting left side by 2 index
using namespace std;
int main(){
	int arr[6]={10,20,30,40,50,60};
	int temp[]={arr[0],arr[1]};
	for(int i=0;i<6;i++){
		arr[i]=arr[i+2];
	}
	for(int i=4;i<6;i++){
		arr[i]=temp[i-4];}
		
		for(int i=0;i<6;i++){
		cout<<arr[i]<<" ";
	
}}
