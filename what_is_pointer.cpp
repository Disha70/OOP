#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    a=10;
    int* b=&a;//b store the address of a
    cout<<"The address of a "<<&a<<"\n";
    //means &a==b
    cout<<"The address of a "<<b<<"\n";
    cout<<"The value of b "<<*b<<"\n";

    int **c=&b;//pointer to pointer initialization
    cout<<"The value at address c is "<<*c<<"\n";
    cout<<"The address value "<<**c<<"\n";//print a value by c ponter to pointer
    
}
//output
//The address of a 0x61ff08
//The address of a 0x61ff08
//The value of b 10