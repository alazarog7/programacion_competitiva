#include <bits/stdc++.h>
using namespace std;
int main(){
    cout<<fixed;
    double y;
    int x;
    cin>>x>>y;
    cout<<setprecision(2)<<(y-((x%5==0 && (y-(double)(x)-0.5)>0)?(x+0.5):0))<<endl;
    return 0;
}