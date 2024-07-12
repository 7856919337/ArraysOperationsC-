#include<iostream>
using namespace std;
void incrementby3(int &f){
	f=f+3;
}
int main(){
	int c=9;
	incrementby3(c);
	cout<<c;
}
