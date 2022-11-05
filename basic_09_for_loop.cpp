#include <iostream>
using namespace std;
int factf(int a){
	int i=2,fact=1;
	for(i=2;i<=a;i++){
		fact*=i;
	}
	return fact;

}

int main(){
	int a,i=2,fact=1;
	cout<<"Enter a number : ";
	cin>>a;
	for(i=2;i<=a;i++){
		fact*=i;
	}
	
	cout<<fact<<endl;
	cout<<factf(a);
	return 0;
}