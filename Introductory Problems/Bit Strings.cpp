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
#define mod 1000000007

int main()
{
    ll n;
    cin >> n;
    ll ans = 1;
    ll base=2;
    while (n)
    {
        if (n&1)
        {
            ans = (ans * base)%mod;
        }
       base=(base*base)%mod;
       n=n>>1;
    }
    cout<<ans;
    return 0;
}