#include <iostream>
#include <cmath>
using namespace std;

#define EH_MAIOR(a, b) ((a + b + abs(a-b))/2)

int oh_maior(int a, int b, int c){
    int maior = EH_MAIOR(a, b);
    return EH_MAIOR(maior, c);
}

int main(){
    int a, b, c;
    cin >> a >> b >> c;

    int resultado = oh_maior(a, b, c);

    cout << resultado << " eh o maior\n";
}