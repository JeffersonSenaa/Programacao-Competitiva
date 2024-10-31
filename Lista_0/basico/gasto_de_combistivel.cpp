#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    const float consumo = 12;
    float velocidade, horas;

    cin >>  horas >> velocidade;

    float litros = (velocidade * horas) / consumo;

    cout << fixed << setprecision(3) << litros << "\n";

    return 0;
}