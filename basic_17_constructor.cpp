#include <iostream>
using namespace std;
class hello
{
private:
    int a=10,b=12;
public:
    hello(int x,int y){
        cout<<"parameterised contructor worked and values assigned"<<endl;
        a=x;b=y;}/* parameterised constructor*/
    hello(){
        cout<<"non-parameterised contructor worked"<<endl;
    }/* non-parameterised constructor*/
    hello(hello &x){
        cout<<"copy contructor worked and values assigned"<<endl;
        a=x.a;
        b=x.b;
    }
    void sum(){
        cout<<"The sum is "<<a+b<<endl;
    }
    ~hello(){
        cout<<"contructor deleted"<<endl;
    }
};


int main(){
    hello h;
    h.sum();
    hello h1(25,35);
    h1.sum();
    hello h2(h1);
    h2.sum();
	return 0;
}