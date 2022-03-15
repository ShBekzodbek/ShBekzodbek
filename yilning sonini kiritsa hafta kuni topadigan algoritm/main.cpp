#include <iostream>
using namespace std;
int main() {
    int num;
    int qoldiq;
    cout<<"Yilning biror kuni raqamini kiriting : \n"<<"Bu yilning birinchi kuni yakshanba bo'lganlini unutmang ! \n"<<"\a";
    cin>>num;
    if(num>0 && num<=365)
    {
        qoldiq=num%7;
        if(qoldiq==0)
        {
            cout<<"Yakshanba";
        }
        else if(qoldiq==1)
        {
            cout<<"Dushanba";
        }
        else if(qoldiq==2)
        {
            cout<<"Seshanba";
        }
        else if(qoldiq==3)
        {
            cout<<"Chorshanba";
        }
        else if(qoldiq==4)
        {
            cout<<"Payshanba ";
        }
        else if(qoldiq==5)
        {
            cout<<"Juma";
        }
        else if(qoldiq==6)
        {
            cout<<"Shanba ";
        }
        else
        {
            cout<<"Boshqa raqam kiriting :";
            return main();
        }
    }
    else
    {
        cout<<"0  dan katta va 365 dan kichik son kiriting ! ";
        return main();
    }








    return 0;
}
