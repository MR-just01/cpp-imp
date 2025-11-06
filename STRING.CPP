#include<iostream>
using namespace std;
#include<conio.h>
int main()
{
// clrscr();
char str[30];
int i,j, flag=1;
cout<<"enter string";
gets(str);
for(j=0;str[j]!='\0';j++);
j=j-1;
for(i=0;i<j;i++,j--)
{
if(str[i]!=str[j])
{flag=0;
  break;
  }
  }
  if(flag==1)
  {
    cout<<"palindrome";
  }
  else{
  cout<<"not palindrome";}
  return 0 ;
}

