// 1st Approach--

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
    int t;
    cin >> t;
    while (t--)
    {
        ll y,x;
        cin>>x>>y;
        ll mx=max(x,y);
        if(mx%2==1){
            if(y==mx){
               cout<<(mx*mx)-x+1;
            }else{
               cout<<(mx-1)*(mx-1)+y;
            }
        }else{
           if(x==mx){
              cout<<(mx*mx)-y+1;
            }else{
               cout<<(mx-1)*(mx-1)+x;
            } 
        }
        cout<<"\n";
    }
    return 0;
}


