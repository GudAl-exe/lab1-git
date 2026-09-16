// Лабораторная работа № 1. Вариант 14.
// Выполнил: Гудочкин А.Д., группа ПИ-53.
#include <iostream>
#include <cmath>
using namespace std;
const double PI = 3.14159265358979; 
// ===== Расчётные функции варианта =====
// Площадь сферы
double sphereSurface(double r) {
return 4 * PI * r * r;
}
double sphereVolume(double r){
return (4.0 * PI * r * r * r)/3.0;
}
// ===== Главная функция: меню =====
int main() {
int choice;
double r;
do {
cout << "\n=== Variant 14: sphere ===\n";
cout << "1. Surface\n";
cout << "2. Volume\n";
cout << "0. Exit\n";
cout << "Chose: ";
cin >> choice;
switch (choice) {
case 1:
cout << "Input r: ";
cin >> r;
cout << "Surface = " << sphereSurface(r) << " m^2\n";
break;
case 2:
cout << "Input r: ";
cin >> r;
cout << "Volume = " << sphereVolume(r) << " m^3\n";
break;
case 0:
cout << "Well Done.\n";
break;
default:
cout << "Error.\n";
}
} while (choice != 0);
return 0;
}