#include<iostream>
using namespace std;
class  Node{
	public:
		int data;
		Node *next,*head,*p,*prev;
	Node(){
		head=NULL;
	}
	void insert(int n){
		if(head==NULL){
	p=new Node();
	p->data=n;
	p->prev=NULL;
	p->next=NULL;
	head=p;
	}
	else {
		Node *ptr;
	  ptr=head; 
	  while(ptr->next!=NULL)
	  {
	  	 ptr=ptr->next;
	  }
    Node *p;
    p=new Node();
    p->data=n;
    p->prev=ptr;
    ptr->next=p;
    p->next=NULL;
    
	}
}

void insert_at_beg(int n1)
{ 
	if(head==NULL){
	p=new Node();
	p->data=n1;
	p->prev=NULL;
	p->next=NULL;
	head=p;
}
else{

	 Node *p;
	 p=new Node();
	 p->data=n1;
	 p->next=head;
	 head->prev=p;
	 head=p;
}
} 
void insert_at_end(int n2)
{
	if (head==NULL)
	{
		p=new Node();
		p->data=n2; 
		p->prev=NULL;
		p->next=NULL;
		
	}
	else
	{
		Node *ptr;
		ptr=head;
		while(ptr->next!=NULL)
		{
			ptr=ptr->next;
		}
		Node *p;
		p=new Node();
		p->data=n2;
		p->prev=ptr;
		ptr->next=p;
		p->next=NULL;
		ptr=p;
}
	}
void insert_at_spec(int n3,int pos)
{
		if (head==NULL)
	{
		p=new Node();
		p->data=n3;
		p->prev=NULL;
		p->next=NULL;
	}
else{
	Node *ptr;
	ptr=head;
	while( ptr->data!=pos)
	{
		ptr=ptr->next;
	}
	Node *p;
	p=new Node();
	p->data=n3;
	p->next=ptr->next;
	p->prev=ptr;
	ptr->next=p;
}
}

void reverse()
{ 	if(head==NULL)
{
	cout<<"empty:";
}
else{
	Node *ptr1=head;
	Node *ptr2=ptr1->next;
	ptr1->next=NULL;
	ptr1->prev=ptr2;
	while(ptr2!=NULL)
	{
		ptr2->prev=ptr2->next;
		ptr2->next=ptr1;
		ptr1=ptr2;
	ptr2=ptr2->prev;
}
head=ptr1;
}
}
void del_beg()
{
	if(head==NULL)
{
	cout<<"empty:";
}
else
{
	Node *ptr;
     ptr=head;
     head=ptr->next;
     ptr->next->prev=NULL;
     delete ptr;
     ptr=NULL;
}
}
void del_end()
{
	if(head==NULL)
{
	cout<<"empty:";
}
else
{
	Node *ptr;
     ptr=head;
     while(ptr->next->next!=NULL){
     	ptr=ptr->next;
	 }
     Node *p=new Node();
     p=ptr->next;
     ptr->next=NULL;
     delete p;
     ptr=NULL;
}
}
void del_spec(int pos)
{
	if(head==NULL)
{
	cout<<"empty:";
}
else
{
	Node *ptr;
     ptr=head;
     while(ptr->next->data!=pos){
     	ptr=ptr->next;
	 }
     Node *p=new Node();
     p=ptr->next;
     ptr->next=ptr->next->next;
     p->next=NULL;
     delete p;
     ptr=NULL;
}
}

void display()
	{ if(head==NULL)
	{
		cout<<"empty";
	}
	else
       {
	   Node *ptr;
       ptr=head;
       while(ptr!=NULL){
		cout<<ptr->data;
		ptr=ptr->next;
}
}
	}
};
int main ()
{
	
	Node no; 
	int c;
	do
	{   
	   cout<<endl<<"press 1 for insert a node:"<<endl;
	   cout<<"press 2 for insertion at begining:"<<endl;
	   cout<<"press 3 for insertion at te end:"<<endl;
	   cout<<"press 4 for insert at specific condition:"<<endl;
	   cout<<"press 5 for reverse:"<<endl;
       cout<<"press 6 for deletion at begining:"<<endl;
	   cout<<"press 7 for deletion at te end:"<<endl;
	   cout<<"press 8 for delete at specific condition:"<<endl;
	   cout<<"press 9 exit:"<<endl;
		cout<<"enter the choice:"<<endl;
		cin>>c;
	if(c==1){	
	cout<<endl<<"insert a node:";
	no.insert(1);
	no.insert(2);
	no.insert(3);
	no.insert(4);
	no.display();
}
    else if(c==2){
	cout<<endl<<"after inserting node at beg:";
	no.insert_at_beg(5);
	no.display();
}
    else if(c==3){
	cout<<endl<<"after inserting node at end:";
	no.insert_at_end(7);
	no.display();
}
else if(c==4){
	cout<<endl<<"after inserting node at specific:";
    no.insert_at_spec(8,4);
	no.display();
}
else if(c==5){
	cout<<endl<<"after reverse:";
	no.reverse();
	no.display();
}
	else if(c==6){
	cout<<endl<<"deletion at begining:";
	no.del_beg();
	no.display();
	}
	else if(c==7){
	cout<<endl<<"deletion at ending:";
	no.del_end();
	no.display();
}
	else if(c==8){
	cout<<endl<<"deletion at specific:";
	no.del_spec(2);
	no.display();
}
else {
	cout<<"invalid";
}
}
while(c!=9);
cout<<endl;
return 0;
}