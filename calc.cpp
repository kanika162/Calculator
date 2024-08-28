#include<iostream>
using namespace std;

int main()
{
    char op;
    float num1,num2;

    cout<<"enter operator either + or - or * or / :";
    cin>>op;
    cout<<"enter two numbers:";
    cin>>num1>>num2;

    switch (op)
    {
        case '+':
        cout<<num1+num2;
        break;

         case '-':
        cout<<num1-num2;
        break;

         case '*':
        cout<<num1*num2;
        break;

         case '/':
        cout<<num1/num2;
        break;

        default:
        cout<<"invalid operator";
        break;
    }
    return 0;
}


