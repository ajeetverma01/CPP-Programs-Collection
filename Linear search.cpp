#include<iostream>
using namespace std;
int main() {
	cout<<"Linear search Technique.....\n";
	int lsearch[20],i,index,num,flag=0;
	cout<<"Enter 10 numbers:\n";
	for(i=0; i<10; i++){
		cin>>lsearch[i];
	}
	cout<<"Enter a number a search:";
	cin>>num;
	for(i=0; i<10; i++){
		if(lsearch[i]==num){
			index=i;
			flag=1;
			break;
		}
	}
	if(flag==1){
		cout<<"Found at index number:";
	    cout<<index;
	}
	else{
		cout<<num<<" is not found.....";
	}
	return 0;
}
