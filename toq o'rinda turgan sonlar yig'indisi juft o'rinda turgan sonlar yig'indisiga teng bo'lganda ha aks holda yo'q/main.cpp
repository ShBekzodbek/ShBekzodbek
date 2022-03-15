#include <iostream>

using namespace std;

int main() {
    int num{};
    int qoldiq{};
    int n{};
    int xona1{};
    int xona2{};
    int sum{};
    int soni{};
    int daraja=10;
    cout << "Sonni kiting : ";
    cin >> num;
    while (num != 0) {

        qoldiq = num % daraja;
        daraja = daraja * daraja;

        num = num / 10;
        cout<<"raqamlar : "<<qoldiq<<endl;
    }



//        sum = sum * 10 + qoldiq;


    }

 /*   while (sum != 0) {
        n = sum % 10;
        sum = sum / 10;
        cout << "raqamlar : " << n << endl;


    }
*/


    return 0;
}