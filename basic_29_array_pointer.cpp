#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a value for n : ";
    cin>>n;
    int arr[n],sum=0,*ptr;
    for(int i=0;i<n;i++){
    	cout<<"Enter a value ";
    	cin>>arr[i];
	}
	ptr=&arr[0];
	for(int j=0;j<n;j++){
		sum+=*ptr;   
		ptr+=1;
	}
	cout<<"The sum = "<<sum<<endl;
	return 0;
	/*
	int arr[]={1,2,3,4};
	int *p=&a,*p1=a,*p2=&a[0];
	
	*/
}