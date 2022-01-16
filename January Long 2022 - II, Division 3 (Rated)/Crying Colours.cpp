#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[3],b[3],c[3],i,j;
	    for(i=1;i<=3;i++)
	    {
	        cin>>a[i]>>b[i]>>c[i];
	    }
	    if(a[1]==n && b[2]==n && c[3]==n)
	    {
	        cout<<"0"<<endl;
	        continue;
	    }
	    for(i=1;i<=3;i++)
	    {
	     j=max((a[2]+a[3]+b[3]),(b[1]+c[1]+c[2]));
	    }
	    cout<<j<<endl;
	}
	return 0;
}
