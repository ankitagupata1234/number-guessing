//C++ program  to make a simple calculator.

#include<iostream>
using namespace std;
int main()
{
float x,y;
char op;
cout<<"Enter the first and second number    ";
cin>>x>>y;
cout<<"Enter  \n 1 for addition \n 2 for subtration \n 3 for multiplication \n 4 for division";
cin>>op;
switch(op)
{
    case '1':
    cout<<"Add=  "<<(x+y);
    break;
    case '2':
    cout<<"Subtract=  "<<(x-y);
    break;
    case '3':
    cout<<"Multiply=  "<<(x*y);
    break;
      case '4':
    cout<<"Divide=  "<<(x/y);
    break;
    //  case '%':
    //cout<<"Remainder=  "<<(x % y);
    //break;
    default:
    cout<<"invalid input";
}
    return 0;
}