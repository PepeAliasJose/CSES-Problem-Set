#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long x = 0; cin >> x;
    long long res = 1;

    for(long y = 1; y<=x; y++){
        res*=y;
    }
    cout << res;
}