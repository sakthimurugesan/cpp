#include<iostream>
#include<vector>
using namespace std;
//STL-Vector in C++
int main()
{
  vector <int>b={1,2,3,4,5,6,7,8,9};
  vector <int>a={10,20,30,40,50,60,70,80,90};  


  cout<<"b\t";
  for(auto i=b.begin();i!=b.end();i++){
    cout<<*i<<"\t";
  }cout<<endl;



    cout<<"a\t";
  for(auto i=a.begin();i!=a.end();i++){
    cout<<*i<<"\t";
  }cout<<endl;


    cout<<"b.at(3)\t\t"<<b.at(3)<<endl;
    cout<<"b.capacity()\t"<<b.capacity()<<endl;
    cout<<"b.empty()\t"<<b.empty()<<endl;

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

push_back(value) value will be added at last index

pop_back() remove last element and remove the element

*/

    return 0;
}