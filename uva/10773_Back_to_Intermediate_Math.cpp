#include <bits/stdc++.h>
using namespace std;
int main(){
  cout<<fixed;
  double d,v,u,time;
  int t, caso = 0;
  cin>>t;

  while(t--){
    cin>>d>>v>>u;
    caso++;
    if(u>v && u != 0 && v != 0){
      time = d/sqrt(pow(u,2)-pow(v,2));
      time -= d/u;
      cout<<"Case "<<caso<<": "<<setprecision(3)<<fabs(time)<<endl;
    }else{
      cout<<"Case "<<caso<<": can't determine"<<endl;
    }
  }
}
