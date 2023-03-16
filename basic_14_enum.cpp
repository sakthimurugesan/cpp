#include <iostream>
using namespace std;
enum gender{Male=10,Female};
int main(){
gender g=Male;
switch (g)
{
case Male:
    cout<<g;break;
case Female:
cout<<g;break;
default:
cout<<"not found";
    break;
}
	return 0;
}