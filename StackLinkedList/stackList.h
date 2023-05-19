#ifndef STACKLIST_H_INCLUDED
#define STACKLIST_H_INCLUDED
template <class type>

class StackList{
    struct Node{
        type data;
        Node* next;
    };
    Node* top;
    int length;
public:
    StackList();
    bool isEmpty();
    bool isFull();
    int lengthIs();
    void push(type);
    void pop(type&);
    void print();

};


#endif // STACKLIST_H_INCLUDED
