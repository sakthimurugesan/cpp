#include <iostream>
using namespace std;
class base{
    private:
    char x;
    public:
    base(int a):x{a}{
        cout<<x<<endl;
        cout<<(int)x<<endl;
        }
   
};
int main(){
    base b(400);
   

	return 0;
}