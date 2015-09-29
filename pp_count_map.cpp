//produce using map in C++
#include<iostream>
#include<map>
#include<string>
using namespace std;
int main()
{
  map<string,int> m;
  std::map<string,int>::iterator mi;

  string s;
  while(cin>>s)
  {
    m[s]++;
  }
  for(mi=m.begin();mi!=m.end();++mi)
    cout<<endl<<mi->first<<"  "<<mi->second;
  return 0;
}
