#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    /*
    If the synchronization is turned off, the C++ standard streams are allowed to buffer their I/O independently, 
    which may be considerably faster in some cases.
    */
    int num; cin >> num;

    if(num>3 || num==1){
        for(int x = 2; x<=num; x+=2){
            cout << x << " ";
        }
        for(int x = 1; x<=num; x+=2){
            cout << x << " ";
        }
    }else{
        cout << "NO SOLUTION";
    }
}