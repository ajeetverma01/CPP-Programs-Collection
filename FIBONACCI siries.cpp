#include<iostream>
using namespace std;
int main(){
	int i;
	int fib[20];
	fib[0]=0;
	fib[1]=1;
	for(i=2;i<20;i++)
	{
	fib[i]=fib[i-1]+fib[i-2];
	}	
	cout<<"fibonacci siries is:\n";
	for(i=0;i<20;i++){
		cout<<fib[i];
    	cout<<endl;
	}
    return 0;
}
