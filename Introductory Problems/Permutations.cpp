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
   if(n==2 || n==3){
    cout<<"NO SOLUTION"<<endl;
   }
   else{
    for(int i=2;i<=n;i=i+2){
        cout<<i<<" ";
    }
    for(int i=1;i<=n;i=i+2){
        cout<<i<<" ";
    }
   }
   return 0;
}

// 2nd Approach--

#include <iostream>
 
int main() {
    size_t n; std::cin >> n;
 
    if(n == 2 || n == 3)
        std::cout << "NO SOLUTION\n";
    else {
        for(size_t i=2; i<=n; i+=2)   // even
            std::cout << i << " ";
        for(size_t i=1; i<=n; i+=2)   // odd 
            std::cout << i << " ";
        std::cout << "\n";
    }
 
    return 0;
}