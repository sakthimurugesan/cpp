#include <iostream>

using namespace std;
int main(){
	int a[]={21,35,89,41,569,16};
	for(auto x:a){
	
	cout<<x<<"  ";}
	int b=sizeof(a)/sizeof(int),c;
	cout<<"\nEnter a number to search : ";cin>>c;
	for(int i=0;i<b;i++){
		if(a[i]==c){
			cout<<"The number is found at "<<i+1;
			return 0;
		}
	}
	cout<<"not found in an array";
	
	
	
	
	
	
}