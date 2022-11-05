#include <iostream>
using namespace std;
class b;
class a{
    private:
    int x=12;
    friend b;
};
class b{
    public:
    a o;
    void disp(){
        cout<<o.x<<endl;
    }
};
int main(){
    b B;
    B.disp();
    a A;
	return 0;
}