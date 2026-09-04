#include<iostream>
using namespace std;

void dollar(float choice){
    float value = choice * 0.011;
    cout << choice << " in the dollar = " << value << endl;
}

void euro(float choice){
    float value = choice * 0.0091;
    cout << choice << " in the euro = " << value << endl;
}

void yen(float choice){
    float value = choice * 1.68;
    cout << choice << " in the yen = " << value << endl;
}

void dinar(float choice){
    float value = choice * 0.00325;
    cout << choice << " in the dinar = " << value << endl;
}

void yuan(float choice){
    float value = choice * 0.071;
    cout << choice << " in the yuan = " << value << endl;
}

int main(){
    int choice;
    double amount;

    cout << "enter the amount in rupees = ";
    cin >> amount;

    cout << "------------currency converter--------------" << endl;
    cout << "1. rupees to dollar" << endl;
    cout << "2. rupees to euro" << endl;
    cout << "3. rupees to yen" << endl;
    cout << "4. rupees to dinar" << endl;
    cout << "5. rupees to yuan" << endl;

    cout << "enter your choice = ";
    cin >> choice;

    switch(choice)
    {
        case 1:
            dollar(amount);
            break;

        case 2:
            euro(amount);
            break;

        case 3:
            yen(amount);
            break;

        case 4:
            dinar(amount);
            break;

        case 5:
            yuan(amount);
            break;

        default:
            cout << "invalid choice";
            break;
    }

    return 0;
}
