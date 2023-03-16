#include <iostream>
using namespace std;
namespace ravi{
	string name="ravi";
	int age=18;
}

namespace ram{
	string name="ram";
	int age=19;
}
using namespace ravi;
int main(){
	cout<<name<<age;
	cout<<ram::name<<ram::age;
	return 0;
}