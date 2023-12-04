#include <iostream>
#include <sstream>
#include <vector>

int main(){
    unsigned int size = 0;
    std::vector<unsigned int> array;
    std::string linea;
    std::string numero = "";

    std::cin >> size;
    getline(std::cin >> std::ws,linea);

    std::stringstream ss(linea); //Se crea un string stream como una entrada
    for(unsigned int x = 0; x<size; x++){
        getline(ss,numero,' '); // con el getline nos da el ultimo substring despues del caracter
        array.push_back(std::stoi(numero)); // se mete en el vector
    }

    //Ahora se hace el algoritmo que se solicita
    long steps = 0;
    for(unsigned int x = 1; x<size; x++){
        if(array[x-1] > array[x]){
            steps+=array[x-1] - array[x];
            array[x] = array[x-1];
        }
    }

    std::cout << steps;
}