#include <bits/stdc++.h>
using namespace std;
int main(){
  string  sentence;
  time_t begin_t;
  time_t end_t;
  //cin.get();

  time(&begin_t);
  while(true){
   getline(cin,sentence);
   if(sentence.empty()){
     break;
   }
  }
  time(&end_t);
  cout<<"El tiempo de typing fue "<<(end_t - begin_t)<<" segundos"<<endl;
}
