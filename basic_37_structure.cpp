#include <iostream>
#include <stdlib.h>
using namespace std;
struct student
{
    int age;float mark;string name;
};

int main(){
    student o;
    o.age=19,o.mark=95.8,o.name="Sakthi";
    student o1={20,98.7,"Hari"};
    cout<<o.age<<"\t"<<o.mark<<"\t"<<o.name<<endl;
    cout<<o1.age<<"\t"<<o1.mark<<"\t"<<o1.name<<endl;
    
	return 0;
}