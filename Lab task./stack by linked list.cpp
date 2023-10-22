#include<iostream>
using namespace std;
class Node
{
public:
	int data;
	Node *top,*next;
Node(){
	top=NULL;
}
void push(int val)
{
	
	Node *p;
	p=new Node();
	p->data=val;
	p->next=top;
	top=p;
}

void pop()
{
	if(top==NULL)
	{
		cout<<"stack overflow";
	}
	else{
	  cout<<"poped element"<<top->data;
		top=top->next;
	}
}
void display(){
	Node *ptr;
	if(top==NULL)
	{
		cout<<"stack overflow";
	}
else{
  ptr=top;
  while(ptr!=top){
  	cout<<ptr->data<<endl;
  	ptr=ptr->next;
  }
}
}
};
int main(){
	Node n;
	int ch,val;
	cout<<"1) Push in Stack"<<endl;
	cout<<"2) Pop in Stack"<<endl;
	cout<<"3) display in Stack"<<endl;
	cout<<"4) exit in Stack"<<endl;
	do{
		cout<<"Enter choice:"<<endl;
		cin>>ch;
		switch(ch){
			case 1:{
				cout<<"Enter value to be pushed :"<<endl;
				cin>>val;
				n.push(val);
				break;
				}
			case 2:{
				n.pop();
				break;
				}
			case 3:{
                n.display();
				break;
			}
			
			case 4:{
			cout<<"exit"<<endl;
				break;	
			}
		   default:{
		   	cout<<"Invalid choice";
			break;
		   }	
		}
	}while(ch!=4);
	
	
	return 0;
}