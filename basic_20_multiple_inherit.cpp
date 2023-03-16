#include <iostream>
using namespace std;
class A{public:
    void disp(){
        cout<<"I am from A"<<endl;
    }
};

class B{
    public:
    void disp1(){
        cout<<"I am from B"<<endl;
    }
};
class C:public A, 
public B{
    public:
    void disp2(){
        cout<<"I am from C"<<endl;
    }
};
int main(){
    A o;
    B o1;
    C o2;
    o2.disp();
    o2.disp1();
    o2.disp2();
  
   
	return 0;
}