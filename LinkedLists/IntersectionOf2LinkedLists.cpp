node* insert(node* head,int v)
{
    node* temp=new node();
    temp->data=v;
    temp->next=NULL;
    if(head==NULL)
    {
        head=temp;
        return head;
    }
    
    node* temp1=head;
    while(temp1->next!=NULL)
    {
        temp1=temp1->next;
    }
    
    temp1->next=temp;
    
    return head;
    
}
struct node* findIntersection(struct node* head1, struct node* head2)
{
    // code here
    int i,hash[1001]={0},counta[1001]={0},countb[1001]={0};
    struct node *res=NULL,*curr1=head1,*curr2=head2,*temp,*prev=NULL;
    while(curr1){
        hash[curr1->data]=1;
        counta[curr1->data]++;
        curr1=curr1->next;
    }
    while(curr2){
        if(hash[curr2->data]==1)hash[curr2->data]=2;
        countb[curr2->data]++;
        curr2=curr2->next;
    }
    
    node* head=NULL;
    int k;
    for(int i=0;i<1001;i++)
    {
        if(hash[i]==2)
        {
            k=min(counta[i],countb[i]);
            for(int j=1;j<=k;j++)
                head=insert(head,i);
        }
    }
    
    return head;
    
}