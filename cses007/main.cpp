#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int x = 0; cin >> x;
    for(long n = 1; n<=x; n++){
        long ans = (((n*n)*((n*n)-1))/2) - (4*(n-1)*(n-2));
        cout << ans << "\n";
    }
}