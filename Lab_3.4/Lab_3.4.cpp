// Lab_03_4.cpp
// < Дергачев Назар >
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 0.6

#include <iostream>
using namespace std;

int main()
{
    double x;   // вхідний аргумент
    double y;   // вхідний аргумент
    double R;   // вхідний параметр

    cout << "R = "; cin >> R;
    cout << "x = "; cin >> x;
    cout << "y = "; cin >> y;

    // розгалуження в повній формі
    if ((y >= 0 && (x - R) * (x - R) + y * y <= R * R) ||
        (x <= 0 && x >= -R && y <= 0 && y >= -R &&
            (x + R) * (x + R) + (y + R) * (y + R) >= R * R))
        cout << "yes" << endl;
    else
        cout << "no" << endl;

    cin.get();
    return 0;
}