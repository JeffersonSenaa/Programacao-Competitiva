#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
    int qt, n, m;
    string nameA, choiceA, nameB, choiceB;

    cin >> qt;
    cin.ignore(); 

    for (int i = 0; i < qt; i++) {
        getline(cin, nameA, ' ');
        cin >> choiceA >> nameB >> choiceB;
        cin.ignore();  

        cin >> n >> m;
        cin.ignore();  

        if ((n + m) % 2 == 0) {  
            if (choiceA == "PAR") {
                cout << nameA << endl;
            } else {
                cout << nameB << endl;
            }
        } else {  
            if (choiceA == "IMPAR") {
                cout << nameA << endl;
            } else {
                cout << nameB << endl;
            }
        }
    }

    return 0;
}
