#include <bits/stdc++.h>
using namespace std;
int main(){
    cout<<fixed;
    double K,P,X;
    cin>>K>>P>>X;
    double M = ceil(sqrt((K*P)/X));
    double opt = ((K*P)/M)+X*M;
    cout<<setprecision(3)<<opt<<endl;
    return 0;
}