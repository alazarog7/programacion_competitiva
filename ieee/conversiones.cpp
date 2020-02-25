#include <bits/stdc++.h>
using namespace std;
int main(){
    long long int modulo = 998244353;
    long long int valor = 399297742%modulo;
    long long int valor2 = 598946612%modulo;
    long long int producto = (valor*valor2)%modulo;
    cout<<producto<<endl;
    return 0;
}