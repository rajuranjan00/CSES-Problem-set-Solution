#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
#define f first
#define s second
#define pb push_back
#define mp make_pair
#define fr(i,a,b) for (int i = a; i < b; i++)

vector<string> solve(int n){
    if(n==1){
        vector<string> v;
        v.pb("0");
        v.pb("1");
        return v;
    }
    vector<string> v=solve(n-1);
    vector<string> ans;
    fr(i,0,v.size()){
       ans.pb("0"+v[i]);
    }
    for(int i=v.size()-1;i>=0;i--){
        ans.pb("1"+v[i]);
    }
    return ans;
}
int main(){
   int n;
   cin>>n;
   vector<string> ans=solve(n);
   fr(i,0,ans.size()){
    cout<<ans[i]<<" "<<endl;
   }
   return 0;
}
