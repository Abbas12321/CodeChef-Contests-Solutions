#include<bits/stdc++.h>
using namespace std;
#define M1 (ll)1000000007
#define M2 (ll)998244353
#define Pi 3.141592653
#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
ll power(ll base , ll exponent){
    base %= M1;
    ll result = 1;
    while(exponent>0){
        if(exponent&1) result = (result%M1*base%M1)%M1;
        base = (base%M1*base%M1)%M1;
        exponent >>= 1; 
    }
    return result;
}
ll inv(ll x){
    return power(x,M1-2);
}
int main() {
    fast;
    int t;
    cin>>t;
    while(t--){
        ll n,x,m;
        cin>>n>>x>>m;
        ll a[n+1];
        for(int i=1;i<=n;++i) cin>>a[i] ;// a[i] %= M1;
        //m %= M1;
        ll temp = 1,temp2;
        ll result = a[x];
        for(ll i=1;x-i>0;++i){
            temp = (temp%M1*((m-1+i)%M1))%M1;
            temp = (temp%M1*inv(i)%M1)%M1;
            temp2 = ((a[x-i]%M1)*temp%M1)%M1;
            result = ((result%M1)+temp2%M1)%M1;
            // result = (result%M1+((temp%M1*a[x-i]%M1))%M1)%M1;
        }
        cout<<(result%M1)<<'\n';
    }
}
