#include <iostream>
#include <stdlib.h>
using namespace std;
struct student
{
    int age;float mark;string name;
};

int main(){
    student o[2];
    o[0].age=18,o[0].mark=95.3,o[0].name="Hari";
    o[1].age=19,o[1].mark=97.33,o[1].name="Siva";
    cout<<o[0].age<<endl;
    cout<<o[0].mark<<endl;
    cout<<o[0].name<<endl;
    cout<<"\n\n";
    cout<<o[1].age<<endl;
    cout<<o[1].mark<<endl;
    cout<<o[1].name<<endl;
	return 0;
}