#include<iostream>
using namespace std;
class  Node{
	public:
		int data;
		Node *next,*head,*p;
	Node(){
		head=NULL;
	}
	void insert(int n){
		if(head==NULL){
	head=new Node();
	head->data=n;
	head->next=NULL;
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
    p->next=NULL;
   ptr->next=p;
	}
}

void insert_at_beg(int n1)
{ 
	if(head==NULL){
	p=new Node();
	p->data=n1;
	p->next=NULL;
	head=p;
}
else{

	 Node *p;
	 p=new Node();
	 p->data=n1;
	 p->next=head;
	 head=p;
}
} 
void insert_at_end(int n2)
{
	if (head==NULL)
	{
		head=new Node();
		head->data=n2;
		head->next=NULL;
		
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
		ptr->next=p;
		p->next=NULL;
		ptr=p;
}
	}
void insert_at_spec(int n3,int pos)
{
		if (head==NULL)
	{
		head=new Node();
		head->data=n3;
		head->next=NULL;
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
	ptr->next=p;
}
}

void reverse()
{
	Node *ptr1=NULL;
	Node *ptr2=NULL;
	while(head!=NULL)
	{
		ptr2=head->next;
		head->next=ptr1;
		ptr1=head;
		head=ptr2;
	}
	
	head=ptr1;
}
void del_at_beg(){
	if(head==NULL)
	{
		cout<<"empty";
	}
	else{
	Node *ptr;
	ptr=head;
	head=ptr->next;
	delete ptr;
}
}
void del_at_end()
{
		if(head==NULL)
	{
	cout<<"empty:";
	}
	else{
	Node *ptr;
	 ptr= head;
	 while(ptr->next->next!=NULL)
	 {
	 	ptr=ptr->next;
	 }
	 Node *p=new Node();
	p=ptr->next;
	ptr->next=NULL;
	delete p;
	p=NULL;
}
}
void del_spec(int pos){
	if(head==NULL){
		cout<<"empty:";
	}
	else
	{
		Node *ptr;
		ptr=head;
		Node *p=new Node();
		while(ptr->next->data!=pos){
			ptr=ptr->next;
		}
		p=ptr->next;
		ptr->next=ptr->next->next;
		p->next=NULL;
		delete p;
		p=NULL;
		
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
	   cout<<"press 8 for deletion at specific condition:"<<endl;
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
cout<<endl<<"del at begining:";
    no.del_at_beg();
	no.display();
}
else if(c==7){

	cout<<endl<<"del at ending:";
    no.del_at_end();
	no.display();
}
else if(c==8){

	cout<<endl<<"del at spec:";
    no.del_spec(3);
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