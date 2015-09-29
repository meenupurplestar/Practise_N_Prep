#include<iostream>
#include<string>
using namespace std;
/*
Input two string with integers followed by zero or more exclamation!
find out which one is great : x/y

SRM 351 - DIV 1.

*/

int factorial(int count, int number)
{
  int prod=1;
  if(count>0)
  {
    --count;
    return factorial(count,number)
  }
  else
  {

    for(int a=number;a>1;--a)
    {
      prod*=a;
    }
    return prod;
  }
}
int evaluate_string(string temp)
{
  int t_int;
  string tt="";
  count =0;
  int len = temp.length();
  if(temp[len-1].equals("!"))
  {
    for(int i=0;i<temp.length();i++)
    {
      if(temp[i]!="!")
        tt+=temp[i];
      else
        count++;
    }
    else
    {
      t_int = stoi(tt);
      return t_int;
    }
      t_int = stoi(tt);

      int result = factorial(count,t_int);
      return result;

  }
}
int compare_string(string x, string y)
{
   int x1 = evaluate_string(x);
   int y1 = evaluate_string(y);
   if(x1==y1)
      return 0;
   else if(x1>y1)
      return 1;
   else
      return 2;
}

int main()
{
  int a1=compare_string("0!","1");
  //int a2=compare_string("9","999999999");
//  int a3= compare_string("5!","120");
  if(a1==0)
    cout<<"x=y";
  else if(a1==1)
    cout<<"x>y";
  else
    cout<<"x<y";
}
