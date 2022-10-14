/*Program of simple calculator*/
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter any two numbers:"<<endl;
    cin>>a>>b;
    char op;
    cout<<"Enter any operator:"<<endl;
    cin>>op;
    switch (op){
        case '+':
        cout<<"Sum is:"<<a+b<<endl;
        break;

        case '-':
        cout<<"Difference is:"<<a-b<<endl;
        break;

        case '*':
        cout<<"Product is:"<<a*b<<endl;
        break;

        case '/':
        cout<<"Division is"<<a/b<<endl;
        break;

        default:
        cout<<"Error 404";

    }
    return 0;
}
