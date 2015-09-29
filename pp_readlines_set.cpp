#include<iostream>
#include<string>
#include<set>
using namespace std;
int main()
{
  std::set<std::string> S;
  std::set<string>::iterator si;
  string temp;
  while(std::cin>>temp)
  {
    S.insert(temp);
  }
  for(si=S.begin();si!=S.end();++si)
    std::cout<<*si;
  return 0;
}
