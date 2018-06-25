#include <string>
#include <vector>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    int n=s.length();
	    
	    vector<string> vec;
	    
	    int c=0,j=0;
	    for(int i=0;i<n;i++)
	    {
	       if(s[i]=='.' || i==n-1)
	       {
                if(i==n-1)
                    c++;
	            string x=s.substr(j,c);
	            vec.push_back(x);
	            j=i+1;
	            c=0;
	       }
	       else
	         c++;
	    }
	    
	    for(int i=vec.size()-1;i>=0;i--)
	    {
	        if(i==0)
	        cout<<vec[0];
	        else
	        cout<<vec[i]<<".";
	    }
	    
	    cout<<endl;
	}
	return 0;
}