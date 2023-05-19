#include <iostream>
#include <string>
#include "stackList.h"
#include "stackList.cpp"

using namespace std;

int main()
{
    cout << "Hello world!" << endl;

    StackList <int> obj1;
    StackList <int> obj2;
    int n;

    if(obj1.isEmpty()){
        cout << "Stack is Empty"<<endl;
    }
    else{
        cout << "Stack is Not Empty" <<endl;
    }

    obj1.push(5);
    obj1.push(8);
    obj1.push(13);
    obj1.push(62);
    obj1.push(78);
    obj1.push(91);

    if(obj1.isEmpty()){
        cout << "Stack is Empty"<<endl;
    }
    else{
        cout << "Stack is Not Empty" <<endl;
    }


    if(obj1.isFull()){
        cout << "Stack is Full"<<endl;
    }
    else{
        cout << "Stack is Not Full" <<endl;
    }



    //Printing Function....................
    int s = obj1.lengthIs();
    for(int i=0;i<s;i++){
        obj1.pop(n);
        obj2.push(n);
    }
    for(int i=0;i<s;i++){
        obj2.pop(n);
        cout << n << " ";
        obj1.push(n);
    }


    /*Take strings of parentheses from the user as input and use a stack to
      check if the string of parentheses is balanced or not*/

    string s1 ;
    cin >> s1;

    char a;
    StackList <char> obj3;
    for(int i=0;i<s1.length();i++){
        if(s1[0]==')'){
            obj3.push(s1[i]);
            break;
        }
        else if(s1[i]=='('){
            obj3.push(s1[i]);
        }
        else if(s1[i]==')'){
                if(obj3.isEmpty()){
                    obj3.push(s1[i]);
                    break;
                }
            obj3.pop(a);
        }
    }

    if(obj3.isEmpty()){
        cout << "Balance"<<endl;
    }
    else{
        cout << "Not Balance." <<endl;
    }



    return 0;
}
