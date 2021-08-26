#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};

struct Node *head;

void insert(int value)
{
    int count=0;
    struct Node *newnode=(struct Node*)malloc(sizeof(struct Node));
    newnode->data=value;
    newnode->left=NULL;
    newnode->right =NULL;
    count++;
    if(head==NULL)
    {
        head=newnode;
 ;
    }
    else
    {
        struct Node *temp=head;
        while(1)
        {
            if(newnode->data<temp->data)
            {
                if (temp->left==NULL)
                {
                    temp->left=newnode;
                    count++;

                    break;

                }
                else
                {
                    temp=temp->left;
                    count++;
                }

            }
            else
            {
                if (temp->right==NULL)
                {
                    temp->right=newnode;
                    count++;

                    break;

                }
                else
                {
                    temp=temp->right;
                    count++;
                }

            }



        }
    }

}

void preorder(struct Node *p)
{

    if(p==NULL)
        return;
    cout<<p->data<<" ";
    preorder(p->left);
    preorder(p->right);
}

int main()
{
    head=NULL;
    insert(50);
    insert(70);
    insert(22);
    insert(43);
    insert(17);
    insert(75);
    insert(55);
    insert(89);
    
  preorder(head);


    return 0;
}
