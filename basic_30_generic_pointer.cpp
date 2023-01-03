#include <iostream>
using namespace std;
int main(){
    int a=12;
    void *p;
    p=&a;
    *(int *)p+=1;
    cout<<*(int *)p<<endl;
	return 0;
}