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
    cout << "Sonni kiting : ";
    cin >> num;
    while (num != 0) {

        qoldiq = num % 10;

        num = num / 10;
        xona1++;


        sum = sum * 10 + qoldiq;


    }

    while (sum != 0) {
        n = sum % 10;
        sum = sum / 10;
        cout << "raqamlar : " << n << endl;
        xona2++;
    }
    while (xona1 > xona2) {

        cout << "raqamlar : " << " 0 " << endl;
        xona1--;


    }


    return 0;
}