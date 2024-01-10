#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int cantidad = 0; cin >> cantidad;
    for(int x = 0; x<cantidad; x++){
        long a,b;
        cin >> a >> b;
        bool cond1 = (a+b)%3==0;
        bool cond2 = a > 2*b || b > 2*a;
        bool cond3 = (a==0 && b>0) || (a>0 && b==0);
        if(cond1 && !cond2 && !cond3){
            cout << "YES" << "\n";
        }else{
            cout << "NO" << "\n";
        }
    }

}