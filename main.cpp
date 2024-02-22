#include <iostream>

template <typename N>
struct Node {
    N data;
    Node* next;
};

template <typename T>
void add(Node<T>* head, T value) {

    Node* current = head;

    Node* newNode = new Node();
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

int main()
{
    Node<int>* head = nullptr;
    Node<int>* second = nullptr;
    Node<int>* third = nullptr;

    head = new Node<int>();
    second = new Node<int>();
    third = new Node<int>();

    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = nullptr;

    add(head, 40);

    Node<int>* node = head;

    while (node != nullptr) {
        std::cout << node->data << std::endl;
        node = node->next;
    }
}
