/*
Consider an algorithm that takes as input a positive integer n. 
If n is even, the algorithm divides it by two, and if n is odd, 
the algorithm multiplies it by three and adds one. 
The algorithm repeats this, until n is one. 
For example, the sequence for n=3 is as follows:

 3 -> 10 -> 5 -> 16 -> 8 -> 4 -> 2 -> 1
*/
#include <iostream>

int main(){
    long input;
    //cout << "Escribe un numero \n";
    std::cin >> input;
    std::cout << input << " ";
    while(input>1){
        input = (input%2==0) ? input/2 : input*3+1 ;
        std::cout << input << " ";
    }
    return 0;
}