#include <bits/stdc++.h>
#define ll                      long long
#define int                     ll
#define endl                    '\n'
#define rep(i,k,n)              for(long long i=k; i<n; i++)
#define repb(i,k,n)             for(long long i=k; i>=n; i--)
#define vec                     vector<long long>
#define all(x)                  x.begin(), x.end()
#define pii                     pair<ll,ll>
#define maps                    map<ll,ll>
#define mod                     1000000007
#define eb                      emplace_back
#define fp                      push_front
#define pb                      push_back
#define PB                      pop_back
#define pf                      first
#define ps                      second
#define SET(n)                  fixed<<setprecision(n)
#define bpc                     __builtin_popcountll
#define outp(x)                 cout<<x.pf<<" "<<x.ps<<'\n'
#define FAST                    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define initialise              long long T; cin>>T; while(T--)
using namespace std;
ll sum(int i, int j, vec &prefixsum){
    if(i==0) return prefixsum[j];
    return prefixsum[j]-prefixsum[i-1];
}
ll count(ll r, ll k, vec &prefixsum){
    int start=0,end=r;
    int ans=0;
    while(start<=end){
        int mid=start+(end-start)/2;
        int req=(r-mid+1)*k-sum(mid,r,prefixsum);
        if(mid>=req){
            ans=r-mid+1;
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return ans;
}
void solve(){
    int n,k; cin>>n>>k;
    vec v(n);
    rep(i,0,n) cin>>v[i];
    sort(all(v));
    vec prefixsum(n);
    prefixsum[0]=v[0];
    rep(i,1,n) prefixsum[i]=prefixsum[i-1]+v[i];
    while(k--){
        int res=0;
        int q; cin>>q;
        int k1=upper_bound(v.begin(),v.end(),q-1)-v.begin();
        res=n-k1;
        res+=count(k1-1, q, prefixsum);
        cout<<res<<endl;

    }
}
signed main(){
    FAST
    //   freopen("input.txt","r",stdin);
    //   freopen("output.txt","w",stdout);
    initialise
    solve();
    return 0;
}
