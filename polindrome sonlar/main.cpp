#include <iostream>
    using namespace std;
    int main() {
        int num{};
        int qoldiq{};
        int sum{};
        int num2;
        cout << "Sonni kiting : ";
        cin >> num;
        num2=num;
        while (num != 0) {
            qoldiq = num % 10;
            num = num / 10;
            sum = sum * 10 + qoldiq;
        }
        if(sum==num2)
        {
            cout<<"\nPolindrom\n";
        }
        else
        {
            cout<<"\nPolindrom emas! \n";
        }
        return main();

    }