#include<iostream>
using namespace std;
int main()
{
  int i,c=0;
  char s[]="  Bachelor of computer application";
  cout<<"\nThe line is:\n"<<s<<endl;
  for(i=0; s[i]!=NULL; i++)
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
      c++;
    }
  }
  cout<<"\nTotal vowels found:"<<ends<<c;
  return 0;
}
