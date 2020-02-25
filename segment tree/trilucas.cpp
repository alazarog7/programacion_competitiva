#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll  LUCAS[100001];
void generateLucas(){
    LUCAS[0]=0,LUCAS[1]=2,LUCAS[2]=3;
    for(int i = 3; i < 100001; i++){
        LUCAS[i] = LUCAS[i-1]%1000000007+LUCAS[i-2]%1000000007+LUCAS[i-3]%1000000007;
    }
}
int main(){
    generateLucas();
    vector<ll> serie;
    int T,N,temp;
    int q;
    int tipo,L,R;
    scanf("%d",&T);
    while(T--){
        scanf("%d",&N);
        serie.push_back(0);
        for(int i = 1; i <= N; i++){
            scanf("%d",&temp);
            serie[i] = (serie[i-1] + LUCAS[temp])%1000000007;
            cout<<serie[i]<<" ";
        }
        cout<<endl;
        scanf("%d",&q);
        while(q--){
            scanf("%d %d %d",&tipo,&L,&R);
            if(tipo==1){
                printf("%lld",(serie[R]-serie[L-1]));
            }
        }
        serie.clear();
    }
    /*for(int i = 1; i < 100; i++){
        cout<<LUCAS[i]<<endl;
    }*/
    return 0;
}