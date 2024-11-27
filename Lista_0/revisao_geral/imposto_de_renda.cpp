//[Imposto de Renda](https://www.beecrowd.com.br/judge/pt/problems/view/1051)

#include <iostream>

using namespace std;

int main(){
    float salary;
    cin >> salary;

    if(salary < 2000){
        cout << "Isento\n";
    } else if(n ){
        float tax = salary % 2000;
        if (salary <= 3000){
            return tax * 0.08;
        } else {
            float tax_range = tax % 3000; //taxa de 18%
            tax = tax - tax_range; // taxa de 8%

            tax_range = tax_range * 0.18;
            tax = tax = 0.08;
        }
    }
}