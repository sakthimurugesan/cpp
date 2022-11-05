#include <iostream>
using namespace std;
class A{
    private:
    int x;
    public:
    A(){
        x=0;
    }
    void print(){
        cout<<"X : "<<x<<endl;
    }
    friend void set_value(A &o,int x1);
};

void set_value(A &o,int x1){
    o.x=x1;
}

int main(){

    A a;
    a.print();
    set_value(a,15);
    a.print();


	return 0;
}