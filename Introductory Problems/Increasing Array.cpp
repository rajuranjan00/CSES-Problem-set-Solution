// 1st Approach--
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for (int i = a; i <= b; i++)
 
 
int main(){
   int n;
   cin>>n;
   long long arr[n];
   REP(i,0,n-1){
    cin>>arr[i];
   }
   long long count=0;
   REP(i,1,n-1){
      if(arr[i-1]>=arr[i]){
          long long change=arr[i-1]-arr[i];
          arr[i]+=change;
          count+=change;
      }
   }
   cout<<count<<endl;
   return 0;
}


// 2nd Approach--
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long n, x, ans = 0;
    cin >> n;
    long long a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 1; i < n; i++) {
        if (a[i] < a[i - 1]) {
            ans += (a[i - 1] - a[i]);
            a[i] = a[i - 1];
        }
    }
    cout << ans;
}