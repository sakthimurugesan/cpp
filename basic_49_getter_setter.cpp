#include <iostream>
using namespace std;

class A{
    private:
    int age;
    string name;

    public:
    A(int a,string n){
        age=a;name=n;
    }
    string getname(){
        return this->name;
    }
    int getage(){
        return this->age;
    }
    void setage(int a){
        this->age=a;
    }
    void setname(int n){
        this->name=n;
    }
    void disp(){
        cout<<"Age"<<"\t"<<age<<endl;
        cout<<"Name"<<"\t"<<name<<endl;
       
    }
};



int main(){

    A o(20,"Sakthi");
    cout<<o.getage()<<endl;
    o.setage(25);
    cout<<o.getage()<<endl;
    o.disp();
	return 0;
}