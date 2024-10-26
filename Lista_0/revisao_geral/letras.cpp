#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
using namespace std;

int main(){
    char letter;
    string phrase, word;
    int wordsWithLetter = 0, totalWords = 0;
    
    cin >> letter;
    cin.ignore();  
    getline(cin, phrase);

    istringstream stream(phrase);

    while(stream >> word){
        totalWords++;
        if (word.find(letter) != string::npos) {
            wordsWithLetter++;
        }
    }

    float percentage = (static_cast<float>(wordsWithLetter) / totalWords) * 100;

    cout << fixed << setprecision(1) << percentage << endl;

    return 0;
}
