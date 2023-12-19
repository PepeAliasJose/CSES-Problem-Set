#include <iostream>
#include <cmath>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    double x = 0.0; cin >> x;
    long res = 0;
    for(int y = 1; true; y++){
        if(!(pow(5,y)>x)){
            res+=(x/pow(5,y));
        }else{
            break;
        }
    }
    cout << res;

}