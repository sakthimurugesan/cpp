#include <iostream>
using namespace std;
class A{
public:
void disp(){
    cout<<"i am from class"<<endl;
}


};

class B:public A{
public:
int a=10,b=12;
void disp(){
    cout<<a+b<<endl;
}


};
int main(){
    A a;
    B b;
    a.disp();
    b.disp();
	return 0;
}