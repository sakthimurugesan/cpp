#include <iostream>
using namespace std;
int main(){
    int a[]={1,2,3,4,5,6,7};
    int *p;
    p=&a[0];
    for(int i=0;i<(sizeof(a)/sizeof(int));i++){
        cout<<*p<<endl;
        *p+=1;
    }

	return 0;
}