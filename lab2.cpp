#include <iostream>
#include <cmath>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);          
    SetConsoleOutputCP(1251);

    //Завдання 1
    double x, y;
    cout << "Завдання 1. Введіть x: ";
    cin >> x;

    if (x >= 0) {
        y = exp(-x + 2);
        cout << "Y = " << y << endl;
    }
    else {
        if (fabs(x + 3.2) < 1e-9) {
            cout << "Y не визначено (ділення на нуль)" << endl;
        }
        else {
            y = exp(-x) * sin(1 / (x + 3.2));
            cout << "Y = " << y << endl;
        }
    }

    //Завдання 2 
    double px, py;
    cout << "\nЗавдання 2. Введіть координати точки (x y): ";
    cin >> px >> py;

    if (px >= 0 && py >= 0 && px + py <= 1) {
        cout << "Точка потрапляє в заштриховану область (трикутник)" << endl;
    }
    else if (px <= 0 && py <= 0 && px * px + py * py <= 1) {
        cout << "Точка потрапляє в заштриховану область (чверть круга)" << endl;
    }
    else {
        cout << "Точка НЕ потрапляє в заштриховану область" << endl;
    }

    return 0;
}