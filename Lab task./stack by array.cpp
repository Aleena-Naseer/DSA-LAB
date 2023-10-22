#include<iostream>
using namespace std;
class stack
{
public:
	int stack[100],n=100,top=-1;
void push(int val)
{
	if(top>=n-1)
	{
		cout<<"stack overflow";
	}
	else 
	{
		top++;
		stack[top]=val;
	}
}
void pop()
{
	if(top<=-1)
	{
		cout<<"stack overflow";
	}
	else{
	  cout<<endl<<"poped element:"<<stack[top];
		top--;
	}
}
void display(){
	if(top>=0){
	cout<<endl<<"stack element are:";
	for(int i=top;i>=0;i--)
	{
		cout<<stack[i];
		cout<<endl;
	}
}
else
cout<<"empty";
}
};
int main()
{
	stack s;
	s.push(2);
	s.push(3);
	s.push(4);
	s.push(5);
	s.display();
	s.pop();
	s.display();
}