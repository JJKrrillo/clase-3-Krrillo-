#include <iostream>
using namespace std;
int main () {

float horas, horas2, extras, sueldo , extras2 , impuestos , sueldot;
string nombre;

cout << "Ingrese su nombre: ";
cin >>nombre;

cout << "Ingrese sus horas laborales: ";
cin >> horas;

if (horas <= 160){
sueldo = horas * 10;
}
else if (horas > 160) {
    extras = horas - 160;
    horas2 = horas - extras;
    extras2 = extras * 15;
    sueldo = horas2 * 10 + extras2;
}   
    cout << " EL trabajador " << nombre << "Gana: ; " << sueldo << "\n";

    if(sueldo <= 2000) {
    cout << "Tu sueldo es libre de impuestos. ";
}
    else if(sueldo > 2000 , sueldo <= 2200) {
        impuestos = sueldo * 0.2;
        sueldot = sueldo - impuestos;
        cout << "Tu sueldo paga el 20 por ciento de los impuestos. Tu sueldo total es de $ " << sueldot ;
    }
    else if (sueldo > 2200) {
        impuestos = sueldo * 0.3;
        sueldot = sueldo - impuestos;
        cout << "Tu sueldo paga el 30 por ciento de los impuestos. Tu sueldo total es de: $ " <<sueldot ;
    }
    return 0;
}