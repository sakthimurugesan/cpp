#include <iostream>
using namespace std;
class base{
    private:
     int x;
     string s;
    public:
    base(int x,string s):x(x),s(s){
        cout<<"hello"<<endl;
    }/*
    base(int x,string s){
        this->s=s;
        this->x=x;
    }*/
    void print(){
        cout<<"The value of x : "<<x<<endl;
        cout<<"The value of S : "<<s<<endl;
        }
};





int main(){
    base b(25,"Sakthi");
    b.print();
 
	return 0;
}