#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int mod = 1000000007; //Para numeros muy muy grandes
    long x = 0;cin >> x;
    long long res = 1;
    for(long y = 0; y<x; y++){
        res *= 2;
        res %= mod;
    }
    cout << res;
}