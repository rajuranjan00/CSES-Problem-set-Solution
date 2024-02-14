#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
#define f first
#define s second
#define pb push_back
#define mp make_pair
#define fr(i, a, b) for (int i = a; i < b; i++)

void solve(vector<ll> v,int n,int ind,ll sum1,ll sum2,ll& mini)
{ 
    if(ind==n){
        mini=min(mini,abs(sum1-sum2));
        return;
    }
    solve(v,n,ind+1,sum1+v[ind],sum2,mini);
    solve(v,n,ind+1,sum1,sum2+v[ind],mini);
}
int main()
{
    int n;
    cin >> n;
    vector<ll> v(n);
    fr(i,0,n){
        cin>>v[i];
    }
    ll mini=1e9+1;
    solve(v,n,0,0,0,mini);
    cout<<mini<<endl;
    return 0;
}