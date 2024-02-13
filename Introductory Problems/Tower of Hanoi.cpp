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
void solve(int n, int current, int help, int dest){
    if(n == 1){
        cout << current << " " << dest << endl;
        return;
    }
    solve(n-1, current, dest, help);
    cout << current << " " << dest << endl;
    solve(n-1, help, current, dest);
}

int main()
{
    int n;
    cin >> n;
    cout<<pow(2,n)-1<<endl;
    solve(n,1,2,3);
    return 0;
}
