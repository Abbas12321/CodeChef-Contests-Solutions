#include <stdio.h>

int main(void) 
{
	int t=0;
	scanf("%d",&t);
	while(t--)
	{
	    int n,key=0,sum=0;
	scanf("%d",&n);
        	int a[n];
	for(int i=0;i<n;i++)
	{
	    scanf("%d",&a[i]);
	    sum+=a[i];
	}
	if(n%2==0)
	key=1;
    else
    {
        if(a[0]!=1&&a[n]!=1)
        key=1;
        else
        {
            int c=n/2;
            int d=2*(c*(c+1)/2)+c+1;
           // printf("%d  %d",d,sum);
            if (d!=sum)
            key=1;
            
        }
    }
	
	
	// your code goes here
if(key==1)
printf("no\n");
else
printf("yes\n");
}
return 0;
}
