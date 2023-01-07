#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
    int i,n,n_s;
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
    char choi;
    cout<<"\nDo you want to add more values (y/n) : ";
    cin>>choi;
    if(choi=='y' || choi=='Y'){
        cout<<"Enter no of values to add : ";
        cin>>n_s;
        ptr=(int *)realloc(ptr,n_s*sizeof(int));

        for(int j=n;j<n_s+n;j++){
            cout<<"Enter "<<j+1<<" value : ";
            cin>>ptr[j];
        }

        cout<<"\nAfter updating "<<endl;
        for(int k=0;k<=n+n_s-1;k++){
            cout<<*(ptr+k)<<"\t";
        }
        
    }
    

	return 0;
}