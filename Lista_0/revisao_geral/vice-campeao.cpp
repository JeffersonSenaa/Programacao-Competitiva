#include <iostream>
#include <algorithm> // Para usar a função std::max

using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;

    int vice_campeao;

    if (A > B && A > C) {
        vice_campeao = max(B, C); // A é o maior, então o vice é o maior entre B e C
    } else if (B > A && B > C) {
        vice_campeao = max(A, C); // B é o maior, então o vice é o maior entre A e C
    } else {
        vice_campeao = max(A, B); // C é o maior, então o vice é o maior entre A e B
    }

    cout << vice_campeao << endl;
    return 0;
}
