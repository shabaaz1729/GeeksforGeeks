#include <cmath>
#include <algorithm>
using namespace std;

bool find(int a[],int n)
{
    sort(a,a+n,greater<int>());
    
    for(int i=0;i<n-2;i++)
    {
        for(int j=i+1;j<n-1;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                if(pow(a[i],2)==pow(a[j],2)+pow(a[k],2))
                    return true;
            }
        }
    }
    return false;
}

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	    
	    bool b=find(a,n);
	    
	    if(b)
	    cout<<"Yes\n";
	    else
	    cout<<"No\n";
	    
	}
	return 0;
}