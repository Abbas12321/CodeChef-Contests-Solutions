#include<stdio.h>
#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int t;
    scanf("%d",&t);
    while(t--){
        int n,x;
        scanf("%d %d",&n,&x);
        int a[n];
        int sum=0;
        for(int i=0; i<n; i++){
            scanf("%d",&a[i]);
            sum+=a[i];
        }
        if(x>sum)
        printf("-1\n");
        else{
            sort(a,a+n);
            int count=0;
            int ans=0;
            for(int i=n-1; i>=0; i--){
                ans+=a[i];
                count++;
                if(ans>=x)
                break;
            }
            printf("%d\n",count);
        }
    }
    return 0;
}

