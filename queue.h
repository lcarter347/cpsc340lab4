/*Lisa Carter
  Justin Rice
  Section 1*/

#include<iostream>

#ifndef QUEUE_H_
#define QUEUE_H_



template <class T>
class queue{
    public:
        queue();
        ~queue();
        void enqueue(T);
        T dequeue();
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
queue<T>::queue(){
    head = NULL;
    tail = NULL;
    size = 0;
}

template<class T>
queue<T>::~queue(){
    while (size > 0){
        dequeue();
    }
}

template<class T>    	
void queue<T>::enqueue(T val){
    Node *n = new Node;
    n->data = val;
    n->prev = tail;
    n->next = NULL;
    tail= n;
    if (size < 1){
        head= n;
    } 
    size++;
}

template<class T>    	
T queue<T>::dequeue(){
    if (is_empty()){
        cout << "Cannot dequeue from an empty queue" << endl;
    } else {
        Node *ptr = head;
        head = ptr->next;
        T temp = ptr->data;
        size--;
        delete ptr;
        return temp;
    }

} 

template<class T>    	
int queue<T>::get_size(){
    return size;
}

template<class T>    	
bool queue<T>::is_empty(){
    if (size < 1){
        return true;
    } else {
        return false;
    }
}


#endif
