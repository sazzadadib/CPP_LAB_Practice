#include <iostream>
#include <string>
#include "stackArray.h"
#include "stackArray.cpp"

using namespace std;

int main()
{

    StackArray <int> obj1;
    int n;

    if(obj1.isEmpty()){
        cout << "Stack is Empty"<<endl;
    }
    else{
        cout << "Stack is Not Empty" <<endl;
    }

    obj1.push(5);
    obj1.push(7);
    obj1.push(10);

    if(obj1.isEmpty()){
        cout << "Stack is Empty"<<endl;
    }
    else{
        cout << "Stack is Not Empty" <<endl;
    }

    obj1.print();

    obj1.push(25);
    obj1.push(98);

    if(obj1.isFull()){
        cout << "Stack is Full"<<endl;
    }
    else{
        cout << "Stack is Not Full" <<endl;
    }

    obj1.print();

    obj1.pop(n);

    if(obj1.isFull()){
        cout << "Stack is Full"<<endl;
    }
    else{
        cout << "Stack is Not Full" <<endl;
    }

    obj1.print();


    /*Take strings of parentheses from the user as input and use a stack to
      check if the string of parentheses is balanced or not*/

    string s ;
    cin >> s;

    char a;
    StackArray <char> obj2;
    for(int i=0;i<s.length();i++){
        if(s[0]==')'){
            obj2.push(s[i]);
            break;
        }
        else if(s[i]=='('){
            obj2.push(s[i]);
        }
        else if(s[i]==')'){
                if(obj2.isEmpty()){
                    obj2.push(s[i]);
                    break;
                }
            obj2.pop(a);
        }
    }

    if(obj2.isEmpty()){
        cout << "Balance"<<endl;
    }
    else{
        cout << "Not Balance." <<endl;
    }


    return 0;
}
