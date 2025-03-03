//This program counts total numbers of vowels and consonants in the given sentence........
//                            :)     (:
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
  int i, v=0, c=0;
  char s[20];
  cout<<"Enter Word to count vowels annd consonants\n";
  cin.getline(s,sizeof(s));
  cout<<"\nThe line is:\n"<<s<<endl;
  for(i=0; s[i]!=NULL; i++)  //We also can use while loop instead of  for loop
  {
  	if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
  	{
    switch(s[i])
    {
      case'i':
      case'a':
      case'e':
      case'o':
      case'u':
      case'A':
      case'E':
      case'I':
      case'O':
      case'U':
      v++;
    }
}
    else
    {
      c++;
    }
  } 
 
   
  cout<<"\nTotal vowels found:"<<ends<<v;
  cout<<"\nTotal consonants found:"<<ends<<c;
}
