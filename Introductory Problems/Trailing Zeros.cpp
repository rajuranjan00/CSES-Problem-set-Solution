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


int main()
{
    ll n;
    cin >> n;
    ll ans=0;
    while (n)
    {
        ans+=(n/5);
        n=n/5;
    }
    cout<<ans<<endl;
    return 0;
}