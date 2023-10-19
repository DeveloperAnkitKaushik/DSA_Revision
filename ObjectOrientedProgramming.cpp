#include <iostream>

using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    ~Node()
    {
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "Node Deleted: " << this->data << endl;
    }
};

void insertAtHead(Node *&head, int data)
{
    Node *newNode = new Node(data);
    newNode->next = head;
    head = newNode;
}

void insertAtTail(Node *&tail, int data)
{
    Node *newNode = new Node(data);
    tail->next = newNode;
    tail = newNode;
}

void insertAtPosition(Node *&head, Node *&tail, int position, int data)
{
    Node *newNode = new Node(data);
    if (position == 1)
    {
        insertAtHead(head, data);
        head = newNode;
        return;
    }
    int count = 1;
    Node *temp = head;
    while (count < position - 1)
    {
        if (temp->next == NULL)
        {
            insertAtTail(tail, data);
            tail = newNode;
            return;
        }
        temp = temp->next;
        count++;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}

void deleteNode(Node *&head, Node *&tail, int position)
{
    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete (temp);
    }
    else
    {
        Node *current = head;
        Node *prev = NULL;
        int count = 1;
        while (count < position)
        {
            if (current->next == NULL)
            {
                tail = prev;
                prev->next = current->next;
                current->next = NULL;
                delete current;
                return;
            }
            prev = current;
            current = current->next;
            count++;
        }
        prev->next = current->next;
        current->next = NULL;
        delete current;
    }
}

void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "  ";
        temp = temp->next;
    }
}

int main()
{
    Node *node1 = new Node(7);
    Node *head = node1;
    Node *tail = node1;

    insertAtHead(head, 90);
    insertAtTail(tail, 70);
    insertAtPosition(head, tail, 10, 8);
    print(head);
    cout << endl;
    deleteNode(head, tail, 10);
    print(head);

    cout << endl
         << endl
         << "Head is " << head->data << endl;
    cout << "tail is " << tail->data << endl;
}