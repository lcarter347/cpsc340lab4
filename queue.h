/*Lisa Carter
  Section 1*/

#include<iostream>

#ifndef STACK_H_
#define STACK_H_



template <class T>
class stack{
    public:
        stack();
        ~stack();
        void push(T);
        T pop();
        T peek();
        int get_size();
        bool is_empty();
    private:
        struct Node{
            T data;
            Node * next;
            Node * prev;
        };
        Node *head;
        Node *tail;
        int size;
};

using namespace std;

template<class T>
stack<T>::stack(){
    head = NULL;
    tail = NULL;
    size = 0;
}

template<class T>
stack<T>::~stack(){
    while (size > 0){
        pop();
    }
}

template<class T>    	
void stack<T>::push(T val){
    Node *n = new Node;
    n->data = val;
    n->prev = tail;
    n->next = NULL;
    tail = n;
    if (size < 1){
        head = n;
    } 
    size++;
}

template<class T>    	
T stack<T>::pop(){
    if (is_empty()){
        cout << "Cannot pop from an empty stack" << endl;
    } else {
        Node *ptr = tail;
        tail = ptr->prev;
        T temp = ptr->data;
        size--;
        delete ptr;
        return temp;
    }

} 

template<class T>    	
int stack<T>::get_size(){
    return size;
}

template<class T>    	
bool stack<T>::is_empty(){
    if (size < 1){
        return true;
    } else {
        return false;
    }
}


#endif
