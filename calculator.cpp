#include <iostream>
using namespace std;
int main()
{
    int a,b,sum,diff,x;
    float multi, div;
    cout<<"CHOOSE OPERATION\n"<<"1.SUM\n"<<"2.DIFFERENCE\n"<< "3.MULTIPLICATION\n"<<"4.DIVISION\n";
    cout<<"Enter your choice:";
    cin>> x;
    cout<<"enter a number:";
    cin>>a;
    cout<<"enter number 2:";
    cin>> b;
    switch (x)
    {
        case 1:
            sum=a+b;
            cout<<"SUM:"<<sum;
            break;
        case 2:
            diff=a-b;
            cout<<"DIFFERENCE:"<<diff;
            break;
        case 3:
            multi=a*b;
            cout<<"MULTIPLICATION:"<<multi;
            break;
        case 4:
            div=a/b;
            cout<<"DIVISION:"<<div;
            break;
    }
    return 0;

}