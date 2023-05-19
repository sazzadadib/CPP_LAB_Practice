#ifndef QUEARRAY_H_INCLUDED
#define QUEARRAY_H_INCLUDED

template <class type>
class QueArray{
    int front , rear, maxQue,length;
    type* items;
public:
    QueArray(int n);
    bool isFull();
    bool isEmpty();
    int lengthIs();
    void enQue(type);
    void deQue(type &);
    void print();

};

#endif // QUEARRAY_H_INCLUDED
