#include <iostream>
#include <math.h>
/*
input function
capacity function
iterator function
maniplulating function;


t char[100];
*/
using namespace std;
int main(){
	
    string a,b;
    string c("Welcome to c++");
    cout<<"Enter a string :";
    cin>>a;
    fflush(stdin);
	cout<<"\nEnter a line :";
	getline(cin,b);
	cout<<"\nString - a\t"<<a<<endl<<"String - b\t"<<b<<endl<<"String - c\t"<<c;
	
	
	
	
	string fname="sakthi",lname="murugesan";
	cout<<fname+"  "+lname<<endl;
	string fullname=fname+lname;
	cout<<"Fullname \t"<<fullname<<endl;


string fullname1=fname.append(lname);
cout<<"Fullname using append\t"<<fullname1<<endl;

/*pushback used to add a letter at end of string*/

string noun;
cout<<"Enter a noun ";
cin>>noun;

noun.push_back('s');
cout<<noun<<endl;
noun.pop_back();
cout<<noun;	

string::iterator it;
for(it=fullname1.begin();it!=fullname1.end();it++){cout<<*it;
}
cout<<"\n";

string::reverse_iterator it2;
for(it2=fullname1.rbegin();it2!=fullname1.rend();it2++){cout<<*it2;
}	
cout<<"\n";

string x="x1",y="y1";
x.swap(y);
cout<<x<<endl<<y<<endl;



cout<<"size\t"<<fullname1.size()<<endl;
cout<<"length\t"<<fullname1.length()<<endl;

cout<<"length\t"<<fullname1.max_size()<<endl;

	
	
	return 0;	
	
	
	
	}