#include <iostream>

using namespace std;

int main(){
    while(true){
        int n, m;
        cin >> n >> m;
        if (n == m){
            break;
        } else if(n > m){
            cout << "Decrescente\n";
        } else {
            cout << "Crescente\n";
        }
    }
    return 0;
}