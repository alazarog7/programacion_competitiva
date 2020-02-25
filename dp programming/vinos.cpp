#include <bits/stdc++.h>
#define MAXN 5
using namespace std;
int N;
int p[MAXN] = { 2,3,5,1,4 };
int ganancia(int anio, int izq, int der){
    //cout<<"g("<<anio<<" , "<<izq<<" , "<<der<<")= max{ ";
    cout<<" "<<"g("<<anio<<" , "<<izq<<" , "<<der<<") "<<"->";
    if(izq > der){
        //cout<<"Se llego al cero "<<anio<<" "<<izq<<" "<<der<<endl;
        cout<<"es ......";
        return 0;
        cout<<"cero-...."<<endl;
    }
    //cout<<"Año: "<<anio<<" Izquierda: "<<izq<<" Derecha: "<<der<<endl;
    cout<<" "<<(p[izq] * anio)<<" + g("<<anio+1<<" , "<<izq+1<<" , "<<der<<") , ";
    int opcion1 = p[izq] * anio + ganancia(anio + 1, izq + 1, der);
    //cout<<"Imprimo opcion 1 "<<opcion1<<" en el valor "<<p[izq]<<endl;
    cout<<p[der]<<" "<<anio<<" + g("<<anio+1<<" , "<<izq<<" , "<<der-1<<")}"<<endl;
    int opcion2 = p[der] * anio + ganancia(anio + 1, izq , der - 1);
    //cout<<"Imprimo opcion 2 "<<opcion2<<" en el valor "<<p[der]<<endl;
    cout<<"Retorno = "<<max(opcion1,opcion2)<<endl;
    return max(opcion1,opcion2);  
}
int main(){
    cout<<"++++++++++++++++++++++++++++++++"<<endl;
    cout<<"Iniciando"<<endl;
    cout<<"++++++++++++++++++++++++++++++++"<<endl;
    cout<<"g("<<1<<" , "<<0<<" , "<<4<<")= max ";
    int solucion = ganancia(1,0,4);

    cout<<solucion<<endl;
    return 0;
}

