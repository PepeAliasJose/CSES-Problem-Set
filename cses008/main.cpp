#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int x = 0;cin >> x;
    int digitos[x];
    bool usado[x];
    long sum = 0;
    for(int y = 1; y<=x;y++){
        digitos[y-1] = y;
        usado[y-1] = false;
        sum +=y;
    }
    if(sum%2==0){
        cout << "YES" << "\n";
        long med = sum/2;
        long suma = 0;
        int cont = 0;
        string out = "";
        for(int y = x-1; y>=0; y--){
            suma+=digitos[y];
            if(usado[y]){
                suma-=digitos[y];
            }
            if(suma<med){
                usado[y] = true;
                cont++;
                out += to_string(digitos[y]) + " ";
            }
            if(suma>med){
                suma-=digitos[y];
                usado[y] = false;
            }
            if(suma==med){
                usado[y] = true;
                cont++;
                out += to_string(digitos[y]) + " ";
                break;
            }
        }
        cout << cont << "\n" << out << "\n";
        cout << x-cont << "\n";
        for(int y = 0; y<x; y++){
            if(!usado[y]){
                cout << digitos[y] << " ";
            }
        }
    }else{
        cout << "NO";
    }
}