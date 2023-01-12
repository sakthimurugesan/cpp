#include <iostream>
using namespace std;
class A
{
private:
    struct detail
    {
        int pcode;
        string pname;
        int quan;
        int price;
    };
    int tot=0;

public:
    void get()
    {
        int n;
        cin >> n;
        struct detail o[n];
        for (int i = 0; i < n; i++)
        {
            cin >> o[i].pcode;
            getline(cin, o[i].pname);
            cin >> o[i].quan;
            cin >> o[i].price;
            tot += o[i].quan * o[i].price;
        }
        for (int i = 0; i < n; i++)
        {
            if (o[i].quan * o[i].price > 1000)
            {
                cout << o[i].pcode << " " << o[i].pname << " " << o[i].quan << " " << o[i].price << endl;
                tot += o[i].quan * o[i].price;
            }
            else{
            tot += o[i].quan * o[i].price;}

        }
        cout << tot << endl;
        if (tot > 10000)
        {

            cout << "You have won a voucher of Rs.200";
        }
        else
        {
            cout << "No voucher";
        }
    }
};
int main()
{
    A a;
    a.get();
    return 0;
}