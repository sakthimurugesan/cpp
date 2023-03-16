#include <iostream>
using namespace std;
class A{
    private:
    int x;
    friend void set_value(A &o,int x1);
    public:
    A(){
        x=0;
    }
    void print(){
        cout<<"X : "<<x<<endl;
    }
    
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