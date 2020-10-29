#include<iostream>
using namespace std;
class node
{   public:
    int n;
    node *l,*r;
};
node* newnode(int data)
{
    node *rooot;
    rooot=(node*)malloc(sizeof(node));
    rooot->l=rooot->r=NULL;
    rooot->n=data;
    return rooot;
}
node* ins(node *root,int data)
{   if(!root)
    return newnode(data);
    if(root->n >data)
        root->l=ins(root->l,data);
    else if(root->n < data)
        root->r=ins(root->r,data);
    return root;
}
void inorder(node* root)
{
    if(root)
    {
        inorder(root->l);
        cout<<root->n<<" ";
        inorder(root->r);
    }
}
int main()
{

    node *root=NULL;
    while(1)
    {   int c;cin>>c;
        int data;
        switch(c)
        {
        case 1:
            cin>>data;
            root=ins(root,data);
        break;
        case 2:
            inorder(root);
        case 3:
            exit(0);
        }
    }
}
