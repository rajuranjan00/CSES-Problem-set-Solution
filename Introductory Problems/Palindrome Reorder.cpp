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
    string s;
    cin >> s;
    int n=s.length();
    unordered_map<char,int> mp;
    for(auto it:s){
        mp[it]++;
    }
    int count=0;
    char ch;
    for(auto it : mp){
        if(it.second%2==1){
            ch=it.first;
            count++;
        }
    }
    if(count>1){
       cout<<"NO SOLUTION"<<endl;
    }else{
        string ans(n,'.');
        int i=0,j=n-1;
        for(auto it:mp){
            if(it.first!=ch){
                while(it.second!=0){
                    ans[i]=it.first;
                    ans[j]=it.first;
                    i++;
                    j--;
                    it.second-=2;
                }
            }
        }
        for(int i=0;i<n;i++){
            if(ans[i]=='.'){
                ans[i]=ch;
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}