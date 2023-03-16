#include <iostream>
using namespace std;

class car{
    public:
virtual void start(){
    cout<<"car start "<<endl;
}
};
class bmw:public car{
    public:
    void advance_gear(){
        cout<<"BMW Advance gear"<<endl;
    }
    void start(){
    cout<<"car start from bmw"<<endl;
}
};


int main(){
    car *c=new bmw();
    c->start();
	return 0;
}