#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};

int getlenght(Node *&head)
{
    int len = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }
    return len;
}

void insertathead(Node *&head, int data)
{
    //     IF THERE IS NO NODE
    if (head == NULL)
    {
        Node *temp = new Node(data);
        head = temp;
    }
    else
    {
        Node *temp = new Node(data);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

void insertattail(Node *&tail, int data)
{
    //    IF THERE IS NO NODE
    if (tail == NULL)
    {
        Node *temp = new Node(data);
        tail = temp;
    }
    else
    {

        Node *temp = new Node(data);

        temp->next = NULL;
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}

void insertatposition(Node *&head, Node *&tail, int position, int data)
{
    if (position == 1)
    {
        insertathead(head, data);
        return;
    }
    Node *temp = head;
    int cnt = 1;
    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }
    if (temp->next == NULL)
    {
        insertattail(tail, data);
        return;
    }

    Node *nodetoinsert = new Node(data);

    nodetoinsert->next = temp->next;
    temp->next->prev = nodetoinsert;
    temp->next = nodetoinsert;
    nodetoinsert->prev = temp;
}
void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Node *node1 = new Node(50);

    cout << node1->data << endl;
    Node *head = node1;
    Node *prev = node1;
    Node *next = node1;
    Node *tail = node1;
    print(head);
    // cout << getlenght(head) << endl;

    insertathead(head, 40);
    print(head);
    cout << "HEAD " << head->data << endl;
    cout << "TAIL " << tail->data << endl;
    insertathead(head, 30);
    print(head);
    cout << "HEAD " << head->data << endl;
    cout << "TAIL " << tail->data << endl;
    insertathead(head, 20);
    print(head);
    cout << "HEAD " << head->data << endl;
    cout << "TAIL " << tail->data << endl;
    insertathead(head, 10);
    print(head);
    cout << "HEAD " << head->data << endl;
    cout << "TAIL " << tail->data << endl;
    insertattail(tail, 60);
    print(head);
    cout << "HEAD " << head->data << endl;
    cout << "TAIL " << tail->data << endl;
    insertatposition(head, tail, 3, 105);
    print(head);
    cout << "HEAD " << head->data << endl;
    cout << "TAIL " << tail->data << endl;
    insertatposition(head, tail, 1, 100);
    print(head);
    cout << "HEAD " << head->data << endl;
    cout << "TAIL " << tail->data << endl;
    insertatposition(head, tail, 9, 110);
    print(head);

    cout << "HEAD " << head->data << endl;
    cout << "TAIL " << tail->data << endl;
}