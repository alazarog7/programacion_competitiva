#include <bits/stdc++.h>
using namespace std;
int main(){
    cout<<fixed;
    long n,k;
    scanf("%ld %ld",&n,&k);
    long cont = 0;
    long t;
    while(n--){
        scanf("%ld",&t);
        cont+=(t%k==0);
    }
    printf("%ld\n",cont);
    return 0;
}