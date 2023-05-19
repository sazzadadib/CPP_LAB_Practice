#ifndef STACKARRAY_H_INCLUDED
#define STACKARRAY_H_INCLUDED
template <class type>
class StackArray{
    int top;
    static const int arrSize = 5;
    type items[arrSize];
    int length;
public:
    StackArray();
    bool isEmpty();
    bool isFull();
    int lengthIs();
    void push(type );
    void pop(type& );
    void print();

};


#endif // STACKARRAY_H_INCLUDED
