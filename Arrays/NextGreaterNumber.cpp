#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;

int main()
{
  int a[]={5,3,2,10,6,8},soln[6]; 
  int n=a.length();
  stack<int> s;

  s.push(0);
  for(int i=1;i<n;i++)
  {
    while(a[i]>a[s.top()])
    {
        soln[s.top()]=a[i];
        s.pop();
        if(s.empty())
          break;
    }
    s.push(i); 
  }

  while(!s.empty())
  {
    soln[s.top()]=-1;
    s.pop();
  }

  for(int i=0;i<n;i++)
    cout<<soln[i]<<" ";

  return 0;
}