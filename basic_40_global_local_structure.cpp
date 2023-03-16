#include <iostream>
#include <stdlib.h>
using namespace std;
struct student
{
    int age;float mark;string name;
};

void disp(){
    struct info
{
    int age;float mark;string name;
};

info o;
    o.age=19,o.mark=95.8,o.name="Sakthi";
    cout<<o.age<<"\t"<<o.mark<<"\t"<<o.name<<endl;

}

int main(){
    student o;
    o.age=19,o.mark=95.8,o.name="Sakthi";
    cout<<o.age<<"\t"<<o.mark<<"\t"<<o.name<<endl;
    disp();
    
	return 0;
}