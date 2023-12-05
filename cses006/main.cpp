#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

long calcularDiagonal(long t);
void getPosicion(long fila, long col);

int main(){
    ios_base::sync_with_stdio(false);
    long a, b;
    long t; cin >> t;

    for(int x = 0; x<t;x++){
        cin >> a >> b; //Lectura de 2 strings separados por espacios
        getPosicion(a,b);
    }
}

long calcularDiagonal(long t){ //Encontrar el valor de la diagonal 
    return t*t-(t-1);
}

void getPosicion(long fila, long col){ //Segun su posicion calcular el valor respecto a la diagonal
    
    if(fila>col){
        if(fila%2==0){
            cout << calcularDiagonal(fila) + (fila-col) << "\n";
        }else{
            cout << calcularDiagonal(fila) - (fila-col) << "\n";
        }
    }else{
        if(col%2==0){
            cout << calcularDiagonal(col) - (col-fila) << "\n";
        }else{
            cout << calcularDiagonal(col) + (col-fila) << "\n";
        }
    }
}