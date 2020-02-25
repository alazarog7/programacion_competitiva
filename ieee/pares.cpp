#include <bits/stdc++.h>
using namespace std;
vector<int>v;
map<int,int>mapa;
int main() 
{ 

	int cp,x,tar,n;
	cin>>cp;
    while(cp--){
        bool flag = false; 
        v.clear();
        mapa.clear();
		cin>>tar>>n;
		for(int i=0;i<n;i++){
			cin>>x;
			v.push_back(x);
            //mapa[x] = tar - x;
            int contar =  mapa.count(x);
            if(contar > 0 ){
                mapa[x]=++mapa[x]; 
            }else{
                mapa.insert(pair<int,int>(x,1));    
            }
		}
        sort(v.begin(),v.end());
        //cout<<mapa.count(12)<<endl;
        for(int i = 0; i < v.size(); i++){
            int  k = (tar - v[i] == v[i]) ? 2 : 1;
            int contar = mapa.count(v[i]);
            cout<<"valor "<<v[i]<<" = "<<mapa[v[i]]<<endl;
            //cout<<"k = "<<k<<endl;
            //cout<<"contar "<<v[i]<<"= "<<contar<<endl;
            cout<<"Complemento = "<<mapa[tar - v[i]]<<endl;
            if(mapa[tar - v[i]] >= k){
                //cout<<"Complemento = "<<mapa[tar - v[i]]<<endl;
                //cout<<mapa.count(tar-v[i])<<endl;
                cout<<v[i]<<" "<<tar - v[i]<<endl;
                flag=true;
                break;
            }
        }
        if(!flag){
            cout<<"!OK"<<endl;
        }
    }
	return 0; 
} 
