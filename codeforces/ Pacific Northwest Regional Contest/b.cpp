#include <bits/stdc++.h>
using namespace std;
int _nextnumber(int n){
    int k = n;
    while(true){
        bool flag = true;
        while(k!=0){
            if(k%10==0){
                flag=false;break;
            } 
            k/=10;
        }
        if(flag) return n;
        k=++n;
    }

}
int main(){
    int n;
    cin>>n;
    cout<<_nextnumber(n+1)<<endl;
    return 0;
}