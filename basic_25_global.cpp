#include <iostream>
using namespace std;
int a=12;
void disp(){
    cout<<"From disp function "<<endl;
cout<<"The value stored in A is "<<a<<endl;
}

int main(){
    disp();
    cout<<"From main function "<<endl;
    cout<<"The value stored in A is "<<a<<endl;
	return 0;
}