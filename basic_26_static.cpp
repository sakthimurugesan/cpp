#include <iostream>
using namespace std;

void disp(){
    static int a=0;
    a++;
    cout<<"The value stored in A is "<<a<<endl;
}

int main(){
    disp();
    disp();
	return 0;
}