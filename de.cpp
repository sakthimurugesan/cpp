// You are using GCC
#include <iostream>
using namespace std;
class calc
{
public:
void disp(int *ar){
	for(int i=0;i<4;i++){cout<<*(ar+i)<<" ";}
}
};

class der:public calc{
	public:
	der(){
		int c[]={1,2,3,45};
		int *p=c;
		calc::disp(p);
	}
};
int main()
{
	der d;
	// cout << obj.bmi(w, l);
}