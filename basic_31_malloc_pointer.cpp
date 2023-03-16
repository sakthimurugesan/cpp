#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
    int i,n;
    cout<<"Enter a nummber : ";cin>>n;
    int *ptr;ptr=(int *)malloc(n*sizeof(int));
    //malloc(n*data_size)
    cout<<"Malloc pointer created"<<endl;
    for(i=0;i<n;i++){
        cout<<*(ptr+i)<<"\t";
    }
    cout<<"\nUpdating Malloc pointer"<<endl;
    for(i=0;i<n;i++){
        cout<<"Enter value : "<<i+1;
        cin>>*(ptr+i);
    }

    for(i=0;i<n;i++){
        cout<<*(ptr+i)<<"\t";
    }
	return 0;
}