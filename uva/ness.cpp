#include <bits/stdc++.h>
using namespace std;
int main(){
  int n,m,t;
  cin>>t;
  while(t--){
    int fil, col;
    cin>>n>>m;
    fil = (int)(ceil(((float)(n)-2)/3));
    col = (int)(ceil(((float)(m)-2)/3));
    cout<<fil*col<<endl;
  }
}
