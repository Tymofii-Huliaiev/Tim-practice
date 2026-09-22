#include <iostream>
#include <stdio.h>
#include <locale>
#include <windows.h>
using namespace std;

// Змінили назву з disjunction на my_disjunction
bool my_disjunction (bool a, bool b) { // диз'юнкція
    return a || b;
}

bool implication(bool a, bool b) { // імплікація
    if(a == 1 && b == 0)
        return 0;
    else
        return 1;
}

int main(){
    SetConsoleOutputCP(CP_UTF8); // встановлення UTF-8
    bool x, y, z;
    int x1, y1, z1;

    cout << "Введіть значення x: " << endl;
    cin >> x1;
    if(x1 != 0 && x1 != 1){
        cout << "Ви ввели неправильне значення літералу" << endl;
        system("pause");
        return 0;
    } else x = x1;

    cout << "Введіть значення y: " << endl;
    cin >> y1;
    if(y1 != 0 && y1 != 1){
        cout << "Ви ввели неправильне значення літералу" << endl;
        system("pause");
        return 0;
    } else y = y1;

    cout << "Введіть значення z: " << endl;
    cin >> z1;
    if(z1 != 0 && z1 != 1){
        cout << "Ви ввели неправильне значення літералу" << endl;
        system("pause");
        return 0;
    } else z = z1;

    bool first = my_disjunction (x, y);
    bool second = my_disjunction (my_disjunction (x, y), z);
    bool third = implication (x, my_disjunction (my_disjunction (x, y), z));

    cout << "Перша дія: (x v y)\nРезультат: " << first << endl;
    cout << "Друга дія: ((x v y) v z)\nРезультат: " << second << endl;
    cout << "Третя дія: x => ((x v y) v z)\nРезультат: " << third << endl;

    return 0;
}