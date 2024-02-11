#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
#define f first
#define s second
#define pb push_back
#define mp make_pair
#define fr(i, a, b) for (ll i = a; i <=b; i++)
 
int main()
{
    ll n;
    cin>>n;
    fr(i,1,n){
       cout<<((i*i*(i*i-1))/2-4*(i-1)*(i-2))<<endl;
    }
    return 0;
}