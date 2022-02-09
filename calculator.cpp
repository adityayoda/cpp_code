#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"enter the value of a"<<endl;
    cin>>a;
    int b;
    cout<<"enter the value of b"<<endl;
    cin>>b;
    char op;
    cout<<"enter the operation you want to perform"<<endl;
    cin>>op;
    switch(op){

        case('+'):
                cout<<"answer is"<<endl<<(a+b)<<endl;
                break;
        case('-'):
                cout<<"answer is"<<endl<<(a-b)<<endl;
                break;
        case('*'):
                cout<<"answer is"<<endl<<endl<<(a*b)<<endl;
                break; 
        case('%'):
                cout<<"answer is"<<endl<<endl<<(a%b)<<endl;
                break;
        case('/'):
                cout<<"answer is"<<endl<<(a/b)<<endl;
                break;
        case('&'):
                cout<<"answer is"<<endl<<(a&b)<<endl;
                break; 
        default:
                cout<<"valid operation"<<endl;                                          

    }
    

}