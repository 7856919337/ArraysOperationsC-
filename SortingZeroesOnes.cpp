#include<iostream>
using namespace std;
int main(){
	int countZ=0;
	int countO=0;
	int arr[7]={1,0,1,0,1,0,1};
	for(int i=0;i<7;i++){
		if(arr[i]==0){
			countZ++;
		}
		if(arr[i]==1){
			countO++;
	}}
	int i;
	for( i=0;i<countZ;i++){
		arr[i]=0;
	}
	for(int j=i;j<7;j++){
		arr[j]=1;
	}
		for(int k=0;k<7;k++){
			cout<<arr[k]<<" ";}
	
	
	
}
