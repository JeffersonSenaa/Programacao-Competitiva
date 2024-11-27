// [Intervalo](https://www.beecrowd.com.br/judge/pt/problems/view/1037)

#include <iostream>

using namespace std;

int main(){
    float n;
    cin >> n;

    if (0 <= n && n <= 25){
        cout << "Intervalo [" << 0 << "," << 25 << "]\n";
    } else if (25 < n && n <= 50){
        cout << "Intervalo (" << 25 << "," << 50 << "]\n";
    } else if (50 < n && n <= 75){
        cout << "Intervalo [" << 50 << "," << 75 << "]\n";
    } else if (75 < n && n <= 100){
        cout << "Intervalo (" << 75 << "," << 100 << "]\n";
    } else {
        cout << "Fora de intervalo\n";
    }

    return 0;
}