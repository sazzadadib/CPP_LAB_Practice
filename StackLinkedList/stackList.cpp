#include <iostream>
#include "stackList.h"
using namespace std;

template <class type>
StackList <type> :: StackList(){
    top = NULL;
    length =0;
}



template <class type>
bool StackList <type> :: isEmpty(){
    return top ==NULL;
}

template <class type>
bool StackList <type> :: isFull(){
    try{
        Node* newNode = new Node;
        delete newNode;
        return false;
    }
    catch(exception){
        return true;
    }
}

template <class type>
int StackList <type> :: lengthIs(){
    return length;

}

template <class type>
void StackList <type> :: push(type n){
    Node *newNode = new Node;
    newNode->data = n;
    newNode->next = top;
   /* if(top==NULL){
        top = newNode;
    }
    else{
        top->next= newNode;
    }*/
    top = newNode;
    length ++;
}

template <class type>
void StackList <type> :: pop(type & n){
    if(isEmpty()){
        cout << "error"<<endl;
        return;
    }
    else{
        n = top->data;
        top = top->next;
        length--;
    }
}

