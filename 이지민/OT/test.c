#include <iostream>

template <typename keyType>
struct Node{
    keyType key;
    Node<keyType> *rlink;
    Node<keyType> *llink;
};

template<typename DLinklstType>
class DLinklst{
    Node<DLinklstType> head;
public:
    DLinklst(){
        head = NULL;
    }
    void add(DLinklstType input){
        Node<DLinklstType> node = new Node<DLinklstType>;
        if (head == NULL){
            head = node;
        }
    }
};

int main(){
    
}
