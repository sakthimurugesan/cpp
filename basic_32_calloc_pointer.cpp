#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
    int i,n;
    cout<<"Enter a nummber : ";cin>>n;
    int *ptr=(int *)calloc(n,sizeof(int));
    cout<<"calloc pointer created"<<endl;
    for(i=0;i<n;i++){
        cout<<*(ptr+i)<<"\t";
    }
    cout<<"\nUpdating calloc pointer"<<endl;
    for(i=0;i<n;i++){
        cout<<"Enter value "<<i+1<<" : ";
        cin>>*(ptr+i);
    }

    for(i=0;i<n;i++){
        cout<<*(ptr+i)<<"\t";
    }
	return 0;
}