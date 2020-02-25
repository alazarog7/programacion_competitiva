#include <bits/stdc++.h>
using namespace std;
int main(){
  int t;
  vector<int> pos;
  int lPos;
  cin>>t;
  while(t--){
    cin>>lPos;
    int temp;
    for(int i = 0 ; i <lPos ; i++){
      cin>>temp;
      pos.push_back(temp);
    }
    sort(pos.begin(),pos.end());
    cout<<((pos[lPos-1]-pos[0])*2)<<endl;
    pos.clear();
  }
}
