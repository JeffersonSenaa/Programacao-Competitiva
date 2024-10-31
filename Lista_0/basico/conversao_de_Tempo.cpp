#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int seg = n % 60;
    int min = (n / 60) % 60;
    int hour = (n / 60) / 60;

    cout << hour << ":" << min << ":" << seg << endl;
}