#include <iostream>
using namespace std;

void info(string name,string city,string age){
    string s;
    s="Hi I am "+name+" from "+city+" and i am "+age+" years old";cout<<s;

}

string info1(string name,string city,string age="18"){
    string s;
    s="Hi I am "+name+" from "+city+" and i am "+age+" years old";return s;

}


int main(){

string s,name,city,age;
cout<<"Enter name : ";cin>>name;
cout<<"Enter age : ";cin>>age;
cout<<"Enter city : ";cin>>city;
info(name,city,age);
cout<<"\n"<<info1(name,city,age);

	return 0;
}