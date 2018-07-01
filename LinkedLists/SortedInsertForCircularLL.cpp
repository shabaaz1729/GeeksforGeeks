/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/* structure for a node */
/*
struct Node
{
  int data;
  Node *next;
};
 */
void sortedInsert(Node** head_ref, int x)
{
   //Your code here
   Node* head=(*head_ref);
   Node* temp=head,*temp1=NULL;
   
   while(true)
   {
       if(x>temp->data)
       {
            temp1=temp;
            temp=temp->next;
       }
       else 
       {
             Node* temp2=new Node();
             temp2->data=x;
             temp2->next=temp;
             if(temp==head)
             {
                temp1=head;
                while(temp1->next!=head)
                    temp1=temp1->next;
                temp1->next=temp2;
                *head_ref=temp2;
                break;
             }
             temp1->next=temp2;
             break;
       }
       if(temp==head)
       {
           Node* temp2=new Node();
           temp2->data=x;
           temp1->next=temp2;
           temp2->next=temp;
           break;
       }
    }
   
}