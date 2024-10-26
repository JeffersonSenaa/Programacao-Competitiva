#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
    float A, B, C;
    cin >> A >> B >> C;
    float a = (A * C)/2;
    float b = 3.14159 * pow(C, 2);  // M_PI * C^2 para a área do círculo
    float c = ((A + B) * C) / 2;   // Fórmula do trapézio corrigida
    float d = B * B;             // Quadrado de lado B
    float e = A * B;             // Retângulo de lados A e B

    cout << fixed << setprecision(3);

     cout << "TRIANGULO: " << a << endl;
     cout << "CIRCULO: " << b << endl;
     cout << "TRAPEZIO: " << c << endl;
     cout << "QUADRADO: " << d << endl;
     cout << "RETANGULO: " << e << endl;

    return 0;
}