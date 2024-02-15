#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for (int i=a;i<b;i++)
char chess[8][8];
int c=0;
bool ud[15], ld[15], column[8];
 
void rec(int j){
    if (j == 8) {c++; return; }
    rep(i, 0, 8) {
        if (chess[i][j] == '.' && ud[i+j]==0 && ld[j-i+7]==0 && column[i]==0) {
            ud[i+j] =1, ld[j-i+7] =1, column[i] = 1;
            rec(j+1);
            ud[i+j] =0, ld[j-i+7] =0, column[i] = 0;
 
        }
    }
 
}
 
int main(){
    rep(i,0,8)rep(j,0,8)cin>>chess[i][j];
    rec(0);
    cout<<c;
}