#include <bits/stdc++.h>
using namespace std;

#pragma GCC optimize("Ofast,unroll-loops") 
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("inline")  

using str = string;
using d   = double;
using ld  = long double;
using ll  = long long;
using ull = unsigned long long;

const int maxN = 1e6 + 5;
const ll  MOD  = 1e9 + 7;
const ull inf  = 1e18 + 10;


template<typename T> T gcd(T a, T b){return(b?__gcd(a,b):a);} 
template<typename T> T lcm(T a, T b){return(a*(b/gcd(a,b)));}
template<typename T> T fmax(T a,T b){return (a > b) ? a : b;}
template<typename T> T fmin(T a,T b){return (a < b) ? a : b;}


#define fast() ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define PI acos(-1)
#define space char(32)
#define el '\n'
#define get(s) getline(cin,s)
#define ign() cin.ignore()
#define rev(s) reverse(s.begin(),s.end())
#define maxarr(a,n) *max_element(a, a + n)
#define minarr(a,n) *min_element(a, a + n)
#define one(a,n) int a[n]
#define odu(a,n) d a[n]
#define oll(a,n) ll a[n]
#define two(a,m,n) int a[m][n]
#define tll(a,m,n) ll a[m][n]
#define set(a,n) memset(a,n,sizeof(a))
#define isnum(c) (c >= '0' && c <= '9')
#define isup(c) (c >= 'A' && c <= 'Z')
#define islow(c) (c >= 'a' && c <= 'z')
#define isletter(c) ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
#define FORI(a,b,x) for(int i = a;i < b;i += x)
#define FORJ(a,b,x) for(int j = a;j < b;j += x)
#define FORIE(a,b,x) for(int i = a;i <= b;i += x)
#define FORID(a,b,x) for(double i = a;i < b;i += x)
#define vi(a,n) vector<int> a(n)
#define vb(a,b) vector<bool> a(b)




void solve(){

}

int main(){
    fast();
    return solve(),0;

}
