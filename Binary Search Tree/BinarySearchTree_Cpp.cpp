#include <bits/stdc++.h>
using namespace std;
/*-----------Tree Node class----
    CLASS MEMBERS:

    Data-value you want to add in data;
    Node* left:Points to left childern in tree
    Node* right:Points to right childern in tree

    CONSTRUCTORS:
    Node()->takes data input
    Constructs a new Node with data d and left and right pointers as NULL;

--*/
class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int d)
    {
        data = d;
        left = NULL;
        right = NULL;
    }
    Node *search(Node *root, int key)
    {
        if (root == NULL || root->data == key)
            return root;

        // Key is greater than root's data
        if (root->data < key)
            return search(root->right, key);

        // Key is smaller than root's data
        return search(root->left, key);
    }
    Node *insert(Node *root, int data)
    {
        if (root == NULL)
        {
            return new Node(data);
        }
        else
        {
            Node *cur;
            if (data <= root->data)
            {
                cur = insert(root->left, data);
                root->left = cur;
            }
            else
            {
                cur = insert(root->right, data);
                root->right = cur;
            }
            return root;
        }
    }
    Node *deletenode(Node *root, int k)
    {
        // Base case
        if (root == NULL)
            return root;
        // If root->data is greater than k then we delete the root's subtree
        if (root->data > k)
        {
            root->left = deletenode(root->left, k);
            return root;
        }
        else if (root->data < k)
        {
            root->right = deletenode(root->right, k);
            return root;
        }

        // If one of the children is empty
        if (root->left == NULL)
        {
            Node *temp = root->right;
            delete root;
            return temp;
        }
        else if (root->right == NULL)
        {
            Node *temp = root->left;
            delete root;
            return temp;
        }
        else
        {
            Node *Parent = root;
            // Find successor of the node
            Node *succ = root->right;
            while (succ->left != NULL)
            {
                Parent = succ;
                succ = succ->left;
            }

            if (Parent != root)
                Parent->left = succ->right;
            else
                Parent->right = succ->right;

            // Copy Successor Data
            root->data = succ->data;

            // Delete Successor and return root
            delete succ;
            return root;
        }
    }
    void inorder(Node *root)
    {
        if (root == NULL)
            return;

        // First recur on left subtree
        inorder(root->left);
        // Then read the data of child
        cout << root->data << " ";
        // Recur on the right subtree
        inorder(root->right);
    }
    void preorder(Node *root)
    {
        if (root == NULL)
            return;

        // First read the data of child
        cout << root->data << " ";
        // Then recur on left subtree
        preorder(root->left);
        // Then Recur on the right subtree
        preorder(root->right);
    }
    void postorder(Node *root)
    {
        if (root == NULL)
            return;

        // Then recur on left subtree
        postorder(root->left);
        // Then Recur on the right subtree
        postorder(root->right);
        // First read the data of child
        cout << root->data << " ";
    }
};
int main()
{
    Node Tree(0);
    Node *root = NULL;
    // Number of nodes to be inserted
    int t;
    cin >> t;
    while (t--)
    {
        int data;
        cin >> data;
        root = Tree.insert(root, data);
    }
    Tree.preorder(root);
    cout<<endl;
    Tree.inorder(root);
    cout<<endl;
    Tree.postorder(root);
    
}
