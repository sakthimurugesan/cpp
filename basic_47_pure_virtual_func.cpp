#include <iostream>
using namespace std;
class base{public:
    virtual void fun()=0;
};
class der:public base{public:
    void fun(){
        cout<<"Displaying from class B";
    }
};
int main(){
   base *b;
   der d;
   b=&d;
   b->fun();
	return 0;
}