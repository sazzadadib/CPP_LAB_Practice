#include <iostream>
#include "stackArray.h"

using namespace std;

template <class type>
StackArray <type> :: StackArray(){
    top = -1;
    length = 0;
}

template <class type>
bool StackArray <type> :: isEmpty(){
    return top == -1;
}

template <class type>
bool StackArray <type> :: isFull(){
    return length == arrSize;
}

template <class type>
int StackArray <type> :: lengthIs(){
    return length;
}

template <class type>
void StackArray <type> :: push(type n){
    items[++top]=n;
    length++;
}

template <class type>
void StackArray <type> :: pop(type &n){
    n = items[top--];
    length --;
}

template <class type>
void StackArray <type> :: print(){

    int s = length;
    type n ,arr[length];
    for(int i=0;i<s;i++){
        pop(n);
        arr[i]=n;
    }
    for(int i=s-1;i>=0;i--){
       cout << arr[i]<< " ";
       push(arr[i]);
    }
    cout <<endl;
}
