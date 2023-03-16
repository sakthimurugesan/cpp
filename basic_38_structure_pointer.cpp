#include <iostream>
#include <stdlib.h>
using namespace std;
struct student
{
    int age;float mark;string name;
};

int main(){
    student o1={20,98.7,"Hari"};
    student *o2=&o1;  
    cout<<o2->age<<endl;
    cout<<o2->mark<<endl;
    cout<<o2->name<<endl;
    cout<<"\n";
    cout<<(*o2).age<<endl;
    cout<<(*o2).mark<<endl;
    cout<<(*o2).name<<endl;
	return 0;
}