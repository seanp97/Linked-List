#include <iostream>

template <typename N>
struct Node {
    N data;
    Node* next;
};

template <typename T>
void add(Node<T>* head, T value) 
{
    Node<T>* current = head;

    Node<T>* newNode = new Node<T>();
    newNode->data = value;
    newNode->next = nullptr;

    if (current == nullptr) {
        head = newNode;
        return;
    }

    while (current->next != nullptr) {
        current = current->next;
    }

    current->next = newNode;
}

template <typename L>
int length(Node<L>* head) 
{
    Node<L>* curr = head;
    int total = 0;

    while (curr != nullptr) {
        curr = curr->next;
        total++;
    }

    return total;
}

int main()
{
    Node<int>* head = new Node<int>();
    Node<int>* second = new Node<int>();
    Node<int>* third = new Node<int>();

    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = nullptr;

    add(head, 40);

    int x = length<int>(head);

    std::cout << x << std::endl;

    Node<int>* node = head;

    while (node != nullptr) {
        std::cout << node->data << std::endl;
        node = node->next;
    }
}
