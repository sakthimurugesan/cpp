#include <iostream>
using namespace std;
class A{
    public:
    void disp(){
        cout<<"I am from A"<<endl;
    }
};


class B:public A{
    public:
    void disp1(){
        cout<<"I am from B"<<endl;
    }
};

class C:public B{
    public:
    void disp2(){
        cout<<"I am from C"<<endl;
    }
};
int main(){
    C o;
    o.disp();
    o.disp1();
    o.disp2();
	return 0;
}