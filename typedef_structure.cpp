#include<bits/stdc++.h>
using namespace std;
typedef struct student//using typedef
{
    string name;
    int favid;
    char favchar;


}AD;//shortcut if we use  typedef keyword
int main()
{
    AD  disha;//shortcut without using structure name
    disha.name="Disha";
    disha.favid=406;
    disha.favchar='A';
    cout<<"name: "<<disha.name<<"\n";
    cout<<"favid: "<<disha.favid<<"\n";
    cout<<"favchar: "<<disha.favchar<<"\n";
}
//output:
// name: Disha
// favid: 406
// favchar: A