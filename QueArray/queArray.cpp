#include <iostream>
#include "queArray.h"
using namespace std;

template <class type>
QueArray <type> :: QueArray(int n){
    maxQue = n+1;
    front = n;
    rear = n;
    length =0;
    items =  new type[maxQue];
}

template <class type>
bool QueArray <type> :: isFull(){
    return (rear+1)%maxQue ==  front ;
}

template <class type>
bool QueArray <type> :: isEmpty(){
    return rear ==  front ;
}

template <class type>
int QueArray <type> ::lengthIs(){
    return length;
}

template <class type>
void QueArray <type> :: enQue(type n){
    rear = (rear+1)%maxQue;
    items[rear] = n;
    length++;
}
template <class type>
void QueArray <type> :: deQue(type & n){
    front = (front+1)%maxQue;
    n = items[front];
    length --;
}
template <class type>
void QueArray <type> :: print() {
    int temp = front ;
    temp = (temp +1)%maxQue;
    while(temp != rear+1){
        cout << items[temp] << " ";
        temp = (temp +1)%maxQue;
    }
    cout << endl;
}

