#include <iostream>
using namespace std;

class car{
    public:
void start(){
    cout<<"car start "<<endl;
}
};
class bmw:public car{
    public:
    void advance_gear(){
        cout<<"BMW Advance gear"<<endl;
    }
};


int main(){
    bmw b;
    car *p;
    bmw *t;
    t=&b;
    p=&b;
    p->start();
    (*p).start();
    t->advance_gear();
    (*t).advance_gear();
	return 0;
}