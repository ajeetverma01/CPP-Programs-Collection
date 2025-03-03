//Push, pop and peek operations on stack......
#include<iostream>
#define size 10
using namespace std;
int push(int st[],int top){
	if(top==size-1){
		cout<<"Stack is full";
		return top;
	}
	cout<<"\nEnter data.....";
	top++;
	cin>>st[top];
	return top;
}
int pop(int st[],int top){
	if(top==-1){
		cout<<"Stack is empty."<<endl;
		return top;
	}
	cout<<"\nElement deleted."<<st[top]<<endl;
	st[top]=0;
	top--;
	return top;
}
void display_status(int st[],int top){
	cout<<"The status now is:"<<endl;
	if(top==-1){
		cout<<"Stack is empty.";
		return;
	}
	while(top>=0){
		cout<<st[top]<<ends<<ends;
		top--;
	}
	return;
}
int main(){
	int top=-1;
	int stack[size];
	top=push(stack,top);
	top=push(stack,top);
	top=pop(stack,top);
	top=push(stack,top);
	top=pop(stack,top);
	top=push(stack,top);
	display_status(stack,top);
	return 0;
}
