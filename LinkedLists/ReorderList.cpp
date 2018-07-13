#include <vector>
void reorderList(Node* head) 
{
    // Your code here
    vector<int> v;
    Node* temp=head;
    if(head==NULL)
        return;
    while(temp!=NULL)
    {
        v.push_back(temp->data);
        temp=temp->next;
    }
    
    Node* temp1=head;
    
    int i=0,j=v.size()-1;
    int flag=0;
    while(i<=j)
    {
        if(flag==0)
        {
            temp1->data=v[i++];
            temp1=temp1->next;
            flag=1;
        }
        else
        {
            temp1->data=v[j--];
            temp1=temp1->next;
            flag=0;
        }
    }
    
}