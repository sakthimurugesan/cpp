#include <iostream>
using namespace std;
class base{
    public:
    virtual void fun(){
        cout<<"Function of base class"<<endl;
    }
};
class derived:public base{
    public:
    void fun(){
        cout<<"Function of derived class"<<endl;
    }

};


int main(){
    derived d;
    base *b;
    b=&d;
    b->fun();
    (*b).fun();


	return 0;
}