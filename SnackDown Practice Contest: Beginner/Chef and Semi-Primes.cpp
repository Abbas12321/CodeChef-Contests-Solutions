#include <bits/stdc++.h>
using namespace std ;
using namespace std::chrono;

#define ll long long 
#define pb push_back 
#define yes cout << "YES" 
#define no cout << "NO" 
#define all(x) (x).begin(),(x).end()

const long long int mod = 1e9 + 7 ;
const long long int INF = 1e18 ;

void readvec(vector<ll> &v){
    for(int i = 0 ; i < v.size() ; i++){
        cin >> v[i] ;
    }
}

void printvec(vector<ll> &v){
    for(int i = 0 ; i < v.size() ; i++){
        cout << v[i] << " ";
    }
}

//For debugging :
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif

void _print(long long t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(long double t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(unsigned long long t) {cerr << t;}

template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.first); cerr << ","; _print(p.second); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}

//binary exponentiation 
long long binpow(long long a, long long b) {
    if (b == 0)
        return 1;
    long long res = binpow(a, b / 2);
    if (b % 2)
        return res * res * a;
    else
        return res * res;
}

//finds if an integer is prime or not !
bool prime(long long int n){
    for(int i = 2 ; i*i <= n ; i++){
        if(n%i == 0){
            return false ;
        }
    }
    return true ;
}

bool semi_prime(ll n){
    vector<ll> factors ;
    for(int i = 2 ; i*i < n ; i++){
        if(n%i == 0){
            factors.pb(i);
        }
    }
    for(auto x : factors){
        if(prime(x) and prime(n/x)){
            return true ;
        }
    }
    return false ;
}

vector<ll> semi ;
void store(){
    for(int i = 4 ; i <= 210 ; i++){
        if(semi_prime(i)){
            semi.pb(i);
        }
    }
}
void solve(){
    ll n ; cin >> n ; 
    for(int i = 0 ; i < semi.size() ; i++){
        ll other = n - semi[i];
        debug(other)
        if(binary_search(all(semi), other)){
            yes;
            return ;
        }
    }
    no;
}

int main(){
    auto start = high_resolution_clock::now();
    ios::sync_with_stdio(false);
    cin.tie(0);

#ifndef ONLINE_JUDGE
    freopen("Error.txt", "w", stderr);
#endif

    store();
    debug(semi)
    int tests = 1 , test_case = 1;
    cin >> tests ;
    while(tests--){
        cout << setprecision(15) << fixed ;
        solve() ;
        cout << '\n' ;
        // cout << "Case #" << test_case << ": " << ans << '\n' ;
    }

    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cerr << "\n\nTime taken : " << fixed << duration.count() / 1000000.0 << "seconds" << "\n";
}

