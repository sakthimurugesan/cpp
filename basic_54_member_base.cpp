#include <iostream>
using namespace std;
class base{
    private:
    int x;
    public:
    base(int a):x(a){}
    void print(){cout<<"The value of x : "<<x<<endl;}
};

class derived:public base{
    private:
    int t;
    public:
    derived(int a,int b):base(a),t(b){}
};



int main(){
    base b(25);
    b.print();
    derived d(12,24);
    d.print();

	return 0;
}