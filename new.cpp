/*

// You are using GCC
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    struct side{
        int x1,y1,x2,y2,x3,y3,x4,y4;
    };
    struct side o[2];
    for(int i=0;i<2;i++){
        cin>>o[i].x1>>o[i].y1>>o[i].x2>>o[i].y2>>o[i].x3>>o[i].y3>>o[i].x4>>o[i].y4;
    }
    int sqare=sqrt((o[0].x2-o[0].x1)*(o[0].x2-o[0].x1)+(o[0].y2-o[0].y1)*(o[0].y2-o[0].y1));
    cout<<"Area of the Square is "<<sqare*sqare<<endl;
    int length=sqrt((o[1].x2-o[1].x1)*(o[1].x2-o[1].x1)+(o[1].y2-o[1].y1)*(o[1].y2-o[1].y1));
    int breath=sqrt((o[1].x4-o[1].x3)*(o[1].x4-o[1].x3)+(o[1].y4-o[1].y3)*(o[1].y4-o[1].y3));
    cout<<"Area of the Rectangle is "<<length*breath/2<<endl;
    
    struct side o1[2];
    int j[2];
    for(int i=0;i<2;i++){
        int j;
        cin>>o1[i].x1>>o1[i].y1>>o1[i].x2>>o1[i].y2>>j>>o1[i].x3>>o1[i].y3>>o1[i].x4>>o1[i].y4;
    }
    int length1=sqrt((o1[0].x2-o1[0].x1)*(o1[0].x2-o1[0].x1)+(o1[0].y2-o1[0].y1)*(o1[0].y2-o1[0].y1));
    int breath1=sqrt((o1[0].x4-o1[0].x3)*(o1[0].x4-o1[0].x3)+(o1[0].y4-o1[0].y3)*(o1[0].y4-o1[0].y3));
    cout<<"Area of the Parallelogram is "<<length<<endl;



    int l1=sqrt((o1[1].x2-o1[1].x1)*(o1[1].x2-o1[1].x1)+(o1[1].y2-o1[1].y1)*(o1[1].y2-o1[1].y1));
    int b1=sqrt((o1[1].x4-o1[1].x3)*(o1[1].x4-o1[1].x3)+(o1[1].y4-o1[1].y3)*(o1[1].y4-o1[1].y3));
    cout<<"Area of the Trapezoid is "<<(j[1]+b1)*l1/2<<endl;
    
}
*/

/*#include <iostream>
using namespace std;
int main(){
    int n,tot=0;
    cin>>n;
    struct product
    {
        string id,name,name2;
        int qua,price;
    };
    struct product o[n];
    for(int i=0;i<n;i++){
        cin>>o[i].id>>o[i].name>>o[i].name2>>o[i].qua>>o[i].price;
        tot+=o[i].qua*o[i].price;
    }
    for(int i=0;i<n;i++){
        if(o[i].qua*o[i].price>1000){
            cout<<o[i].name2<<" costs more than 1000\n";
        }
    }
    cout<<tot<<endl;
    tot>10000?cout<<"You have won a voucher of Rs.200":cout<<"No voucher";
    
    return 0;
}*/
