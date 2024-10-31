#include <iostream>

using namespace std;

int main(){
    int diametro, largura, altura, profundidade;
    cin >> diametro >> largura >> altura >> profundidade;

    if (diametro <= largura && diametro <= altura && diametro <= profundidade)
        cout << "S" << endl;
    else 
        cout << "N" << endl;
    
    return 0;
}