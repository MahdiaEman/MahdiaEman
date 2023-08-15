//Q1
#include<iostream>
#include<string>

using namespace std;

void *revstring(char *str)
{
  int len=0,n;
  char temp;

  len=strlen(str);
  n=len-1;

  for(int i = 0; i <=(len/2); i++)
  {
    temp=str[i];
    str[i]=str[n];
    str[n]=temp;
    n--;
  }
  return str;
}
int main()
{ 
    char My_string[]=" university  ";
    cout<<"Reverse string is"<<endl;
    revstring(My_string);
    cout<<My_string;

    return 0;
}