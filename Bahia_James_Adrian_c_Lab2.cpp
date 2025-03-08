#include <iostream>

using namespace std;

// Create structure for the Node
typedef struct Node {
    string songName;
    Node *link;
} Node;

// Create a new node
Node* createNode(string data) {
    Node* newNode = new Node; // Create new node instance
    newNode->songName = data; // Assign data
    newNode->link = nullptr;  // Assign link as nullptr
    return newNode;           // Return the created node
}

// Traverse linked list
void traverse(Node* head) {
    Node* temp = head; // Start from the head node

    cout << "My playlist:" << endl;
    while (temp != nullptr) { // Loop through the nodes
        cout << temp->songName << " -> "; // Print data
        temp = temp->link; // Move to the next node
    }
    cout << "NULL" << endl; // End of the list
}

int main() {
    // Create a linked list
    Node* sample = createNode("Heaven Knows by Orange and Lemon");

    // Add more nodes if needed, for example:
    Node* second = createNode("Another Song");
    sample->link = second; // Link the first node to the second node

    // Traverse and print the playlist
    traverse(sample);

    return 0;
}

