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

class Node {
private:
    ChainLink *link;
    Node *next;

public:
    Node(ChainLink &data)
    {
        this->link = &data;
        this->next = nullptr;
    }
    
    string data()
    {
        return this->link->get_color();
    }
};

int main() {
    ChainLink link_one = ChainLink("red");
    Node* NodeOne = new Node(link_one);
    
    ChainLink link_two = ChainLink("green");
    Node* NodeTwo = new Node(link_two);
    
    ChainLink link_three = ChainLink("blue");
    Node* NodeThree = new Node(link_three);
    
    cout << NodeOne->data() << endl;
    cout << NodeTwo->data() << endl;
    cout << NodeThree->data() << endl;
    
    return 0;
}
