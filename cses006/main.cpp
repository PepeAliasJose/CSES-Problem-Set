#include <iostream>
#include <sstream>
using namespace std;

long getDiagonal(long t);
void getPosicion(long fila, long col);

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long a, b;
    long t; cin >> t;

    for(int x = 0; x<t;x++){
        cin >> a >> b; //Lectura de 2 strings separados por espacios
        getPosicion(a,b);
    }
}

long getDiagonal(long t){
    return t*t - (t-1);
}

void getPosicion(long fila, long col){ //Segun su posicion calcular el valor respecto a la diagonal
    if(fila>col){
        if(fila%2==0){
            cout << getDiagonal(fila) + (fila-col) << "\n";
        }else{
            cout << getDiagonal(fila) - (fila-col) << "\n";
        }
    }else{
        if(col%2==0){
            cout << getDiagonal(col) - (col-fila) << "\n";
        }else{
            cout << getDiagonal(col) + (col-fila) << "\n";
        }
    }
}