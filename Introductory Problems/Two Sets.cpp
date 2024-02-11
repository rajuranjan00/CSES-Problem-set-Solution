#include <bits/stdc++.h>
using namespace std;
typedef long long lli;
typedef vector<int> vi;
typedef pair<int, int> pi;
#define f first
#define s second
#define li long int
#define pb push_back
#define mp make_pair
#define fr(i, a, b) for (int i = a; i < b; i++)


int main()
{
    lli n;
    cin >> n;
    lli total = n * (n + 1) / 2;
    if (total & 1)
    {
        cout << "NO";
    }
    else
    {
        cout << "YES" << endl;
        vector<lli> a, b;
        total /= 2LL;
        while (n)
        {
            if (total - n >= 0)
            {
                a.pb(n);
                total -= n;
            }
            else
            {
                b.pb(n);
            }
            n--;
        }
        cout << a.size() << endl;
        for (li ele : a)
            cout << ele << " ";
        cout << endl;
        cout << b.size() << endl;
        for (li ele : b)
            cout << ele << " ";
    }
    return 0;
}