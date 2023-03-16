#include <iostream>
#include <stdlib.h>
using namespace std;
typedef int i;
typedef string str;
struct student
{
    i age;float mark;str name;
};
typedef struct student s;

i main(){
    s o;
    o.age=19,o.mark=95.8,o.name="Sakthi";
    cout<<o.age<<"\t"<<o.mark<<"\t"<<o.name<<endl;

    
	return 0;
}