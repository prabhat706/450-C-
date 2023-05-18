#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};
void levelorderTraversal(Node *root)
{
    queue<Node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();
        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}

Node *insertinBST(Node *root, int data)
{
    if (root == NULL)
    {
        root = new Node(data);
        return root;
    }
    if (data > root->data)
    {
        root->right = insertinBST(root->right, data);
    }
    else
    {
        root->left = insertinBST(root->left, data);
    }
    return root;
}

bool searchinBST(Node *root, int target)
{
    if (root == NULL)
    {
        return false;
    }
    if (target == root->data)
    {
        return true;
    }
    if (target > root->data)
    {
        return searchinBST(root->right, target);
    }
    else
    {
        return searchinBST(root->left, target);
    }
}

void takeinput(Node *root)
{
    int data;
    cin >> data;

    while (data != -1)
    {
        root = insertinBST(root, data);
        cin >> data;
    }
}
int main()
{
    Node *root = NULL;
    cout << "Enter the data to create BST" << endl;
    takeinput(root);
    cout << "Binary Search looks like" << endl;
    levelorderTraversal(root);
    int target;
    cout << "Enter the target value to search in BST" << endl;
    cin >> target;
    cout << "if Element found to then print 01 else 00 : " << searchinBST(root, target);
}