#include <iostream>
using namespace std;

int main(){
    string secuencia; cin >> secuencia;
    int mayor_secuencia = 0;
    int contador = 0;
    for(int x = 0; x<secuencia.length();x++){
        if(secuencia[x] == secuencia[x-1]){
            contador++;
        }else{
            contador = 1;
        }
        mayor_secuencia = (contador>mayor_secuencia) ? contador : mayor_secuencia;
    }
    cout << mayor_secuencia;
}