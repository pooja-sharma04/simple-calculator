#include <iostream>
using namespace std;
int main() {
int choice;
float a,b;
cout<<"Simple Calculator\n";
cout<<"1.Addition\n2.Subtraction\n3.Multiplication\n4.Divison\n";
cout<<"Enter your choice";
cin>>choice;
cout<<"Enter two numbers:";
cin>>a>>b;
switch(choice){
    case 1:
    cout<<"Result="<<a+b;
    break;
    case 2:
    cout<<"Result="<<a-b;
    break;
    case 3:
    cout<<"Result="<<a*b;
    break;
    case 4:
    if(b!=0)
    cout<<"Result="<<a/b;
    else 
    cout<<"Division by zero is not allowed";
    break;
    default:
    cout<<"Invalid choice:";
}

    return 0;
}
