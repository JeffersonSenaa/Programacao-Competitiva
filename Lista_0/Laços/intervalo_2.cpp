#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n; 
    int count_in = 0, count_out = 0;
    cin >> n;

    vector<int> range(n);

    for(int i=0; i < n; i++){
        cin >> range[i];
    }
    for(int i=0; i < n; i++){
        if(10 <= range[i] && range[i] <= 20){
            count_in++;
        } else {
            count_out++;
        }
    }

    cout << count_in << " in\n" << count_out << " out\n";
}