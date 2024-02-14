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

void solve(string s,int ind,int& n,set<string>& ans)
{
    if(ind==n-1){
        ans.insert(s);
        return;
    }
    for(int i=ind;i<n;i++){
        swap(s[ind],s[i]);
        solve(s,ind+1,n,ans);
        swap(s[ind],s[i]);
    }
}
int main()
{
    string s;
    cin>>s;
    int n=s.length();
    set<string> ans;
    sort(s.begin(),s.end());
    solve(s,0,n,ans);
    cout<<ans.size()<<endl;
    for(auto it:ans){
        cout<<it<<endl;
    }
    return 0;
}