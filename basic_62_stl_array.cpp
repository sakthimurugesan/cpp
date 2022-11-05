#include<iostream>
#include<array>
using namespace std;
//STL-Array in C++
int main()
{
    array <int,5> a= {10,20,30,40,50};
    array <int,5> b= {100,200,300,400,500};
    cout<<"A ";
for(auto i=a.begin();i!=a.end();i++){
    cout<<" "<<*i;
}
cout<<endl;
cout<<"a.at(2)\t\t"<<a.at(2)<<endl;
cout<<"a.back()\t"<<a.back()<<endl;
cout<<"a.front()\t"<<a.front()<<endl;
   


    cout<<"b ";
for(auto i=b.begin();i!=b.end();i++){
    cout<<" "<<*i;
}cout<<endl;


cout<<"b.empty()\t"<<b.empty()<<endl;
cout<<"b.size()\t"<<b.size()<<endl;

array <int,5> c={9,8,7,6,5};
c.swap(a);
cout<<"c.swap(a)\nA";

for(auto i=a.begin();i!=a.end();i++){
    cout<<" "<<*i;
}cout<<endl;

cout<<"c";
for(auto i=c.begin();i!=c.end();i++){
    cout<<" "<<*i;
}cout<<endl;

cout<<endl;


/*

editing possible

begin ----------> first_element from start
end -----------> last_element from start


rbegin ----------> last_element from start
rend -----------> first_element from start


editing not possible


cbegin ----------> first_element from start
cend -----------> last_element from start


crbegin ----------> last_element from start
crend -----------> first_element from start


*/

    
    return 0;
}