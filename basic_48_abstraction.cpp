#include <iostream>
using namespace std;
class rbi{
	public:
	virtual void debit_credit()=0;
};

class sbi:public rbi{
	public:
	void debit_credit(){
		cout<<"sbi giving debit credit";
	}

};


class axis:public rbi{
	public:
	void debit_credit(){
		cout<<"axis giving debit credit";
	}


};


int main()
{
	rbi *ptr=new axis();
	ptr->debit_credit();



	return 0;
}