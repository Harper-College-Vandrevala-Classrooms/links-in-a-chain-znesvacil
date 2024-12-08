//
//  main.cpp
//  Links in a Chain
//
//  Created by Zachary Nesvacil on 12/5/24.
//

#include <iostream>

using namespace std;

class ChainLink {
    private:
      string color;

    public:
      ChainLink(string color) {
        this->color = color;
      }

      string get_color() {
        return this->color;
      }
};

struct Node {

    ChainLink *link;
    Node *next;
    
    Node(ChainLink *data)
    {
        this->link = data;
        this->next = nullptr;
    }
    
    Node(ChainLink *data, Node *previous_node)
    {
        this->link = data;
        this->next = nullptr;
        if (previous_node) {
            previous_node->next = this; 
        }
    }
    
    string data()
    {
        return this->link->get_color();
    }
    
    
};

void printList (Node* n) {
    
    while (n!=nullptr) {
        cout << n->link->get_color() << ", ";
        n = n->next;
}
}

int main() {
    ChainLink link_one = ChainLink("red");
    Node* head = new Node(&link_one);
    
    ChainLink link_two = ChainLink("green");
    Node* second_node = new Node(&link_two, head);
    
    ChainLink link_three = ChainLink("blue");
    Node* third_node = new Node(&link_three, second_node);
    
    cout << head->data() << endl;
    cout << second_node->data() << endl;
    cout << third_node->data() << endl;
    
    cout << endl;
    printList(head);
    
    return 0;
}
