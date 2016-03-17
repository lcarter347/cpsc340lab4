/*Lisa Carter
  Justin Rice
  Section 1*/


#include<iostream>

#ifndef LLIST_H_
#define LLIST_H_


template <class T>
class llist{
    public:
        llist();
        ~llist();
        T get();
        void advance();
        void add(T);
        void remove();
        bool is_empty();
        int getsize();
    private:
        struct lNode{
            T data;
            lNode * next;
            lNode * prev;
        };
        lNode *head;
        lNode *tail;
        lNode *current;
        int size;
};

using namespace std;

template<class T>
llist<T>::llist(){
    head = NULL;
    tail = NULL;
    size = 0;
}

template<class T>
llist<T>::~llist(){
    while (size > 0){
        current = head;
        remove();
    }
}

template<class T>
T llist<T>::get(){
    return current->data;
    // return *current;
}

template<class T>
void llist<T>::advance(){
    if (current->next == NULL)
        current = head;
    else
        current = current->next;    
}

template<class T>
void llist<T>::add(T d){
    lNode *n = new lNode;
    n->data = d;
    if (tail != NULL){
        tail->next = n;
        n->prev = tail;
        tail = n;
    }
    else{
        n->prev = NULL;
        n->next = NULL;
        head = n;
        tail = n;
        current = n;
    }    
    size ++;
}

template<class T>
void llist<T>::remove(){
    lNode *temp = current;
    if (size == 1){
        tail = NULL;
        head = NULL;
        size = 0;
        current = NULL;
    }

    else{
        if(tail == current)
            tail = current->prev;
        if(head == current)
            head = current->next;
        advance();
        size --;
    }
    delete temp;
}

template<class T>
int llist<T>::getsize(){
    return size;
}


#endif
