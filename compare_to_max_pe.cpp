#include<iostream>
#include<vector>
using namespace std;

int compare_to_max(vector <int> li)
{
    int max1=li[0];
    if(int(li.size())==0)
      return -1;


    for(int i=0;i<(int)li.size();i++)
    {
      if(li[i]>max1)
        max1=li[i];
      else
        continue;
    }
    return max1;
}
int main()
{
    vector<int> myints;
    int i;
    while(cin>>i)
      myints.push_back(i);
    cout<<compare_to_max(myints);
    return 0;
}
