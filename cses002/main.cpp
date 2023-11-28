/*
You are given all numbers between 1,2,...,n except one. 
Your task is to find the missing number.
*/
#include <iostream>
#include <string>
using namespace std;

int main(){
    int numeros;
    string lista;
    cin >> numeros;
    long valor_sumatorio = 0;
    for(int x = 1; x<=numeros;x++){
        valor_sumatorio +=  x; //calcular sumatorio
    }
    
    getline(cin >> ws,lista); //cin >> ws -> tells the compiler to ignore buffer 
    //and also to discard all the whitespaces before the actual content of string or character array.
    string numero = "";
    long valor_lista = 0;
    lista+=" ";
    for(int y = 0; y<lista.length();y++){
        if(lista[y] == *" "){
            valor_lista += stol(numero);
            numero = "";
        }else{
            numero+=lista[y];
        }
    }

    cout << valor_sumatorio-valor_lista;

    return 0;
}