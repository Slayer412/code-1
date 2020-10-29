#include<iostream>
using namespace std;
struct node {
   int val;
   node* left;
   node* right;
};

node* createNewNode(int x)
{
    node* nn = new node;
    nn->val = x;
    nn->left  = nullptr;
    nn->right = nullptr;

    return nn;
}

void bstInsert(node* &root, int x)
{
    if(root == nullptr) {
        root = createNewNode(x);
        return;
    }

    if(x < root->val)
    {   if(root->left == nullptr) {
            root->left = createNewNode(x);
            return;
        } else {
            bstInsert(root->left, x);
        }
    }

    if( x > root->val )
    {
        if(root->right == nullptr) {
            root->right = createNewNode(x);
            return;
        } else {
            bstInsert(root->right, x);
        }
    }
}
void inorder(node *root)
{
    if(!root)
        return ;
    else
    {
        inorder(root->left);
        cout<<" -> "<<root->val;
        inorder(root->right);
    }
}
void preorder(node *root)
{
    if(!root)
        return ;
    else
    {   cout<<" -> "<<root->val;
        inorder(root->left);
        inorder(root->right);
    }
}
void postorder(node *root)
{
    if(!root)
        return ;
    else
    {
        inorder(root->left);
        inorder(root->right);
         cout<<" -> "<<root->val;
    }
}
int main()
{
     node* root = nullptr;

     int x;
     while(cin >> x) {
            if(x==0)break;
         bstInsert(root, x);
     }
     inorder(root);
     cout<<endl;
     postorder(root);
     cout<<endl;
     preorder(root);

     return 0;
}
