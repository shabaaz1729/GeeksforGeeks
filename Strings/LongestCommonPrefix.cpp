#include <iostream>
#include <string>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    string s1,s2,x;
	    cin>>s1>>s2;
	    
	    int n=s2.length(),m=s1.length();
	    int index=-1,c=0,c_max=0;
	    
	    for(int i=0;i<n;i++)
	    {
	        if(s2[i]==s1[0])
	        {
	            c=1;
	            int k=1;
	            for(int j=i+1;j<n && k<m;j++)
	            {
	                if(s2[j]!=s1[k++])
	                    break;
	                else
	                    c++;
	            }
	        }
	        if(c>c_max)
	        {
	           c_max=c;
	           x=s2.substr(i,c);
	           index=i;
	        }
	    }
	    
	    if(index==-1)
	    cout<<index<<endl;
	    else
	    cout<<index<<" "<<x<<endl;
	}
	return 0;
}