#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int A, B, C;
    cin >> A >> B >> C;

    int maior = max({A, B, C});
    int menor = min({A, B, C});

    int vice = A + B + C - maior - menor;

    cout << vice << endl;
    return 0;
}