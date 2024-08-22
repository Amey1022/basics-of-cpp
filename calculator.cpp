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
/* OUTPUT
CHOOSE OPERATION
1.SUM
2.DIFFERENCE
3.MULTIPLICATION
4.DIVISION
Enter your choice:1
enter a number:10
enter number 2:20
SUM:30
do you want to continue?(y/n):Y
CHOOSE OPERATION
1.SUM
2.DIFFERENCE
3.MULTIPLICATION
4.DIVISION
Enter your choice:2
enter a number:20
enter number 2:10
DIFFERENCE:10
do you want to continue?(y/n):Y
CHOOSE OPERATION
1.SUM
2.DIFFERENCE
3.MULTIPLICATION
4.DIVISION
Enter your choice:3
enter a number:5
enter number 2:10
MULTIPLICATION:50
do you want to continue?(y/n):Y
CHOOSE OPERATION
1.SUM
2.DIFFERENCE
3.MULTIPLICATION
4.DIVISION
Enter your choice:4
enter a number:10
enter number 2:5
DIVISION:2
do you want to continue?(y/n):N
*/
