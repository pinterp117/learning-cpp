#include <iostream>
#define dimenzio 3
using namespace std;

int main() {
    cout << "Hello, World!" << endl;

    //# Olvassunk be 10 számot, majd írjuk ki az átlagukat (ehhez még nem kell tömb)
    /*cout << "Kerek 10 szamot: " << endl;
    int szam;
    double osszeg = 0;
    for (int i = 0; i < 10; i++) {
        cin >> szam;
        osszeg += szam;
    }
    cout << "A szamok atlaga: " << osszeg / 10;*/

    //# Írjuk ki az átlag alatti értékeket (itt már muszáj tömbbe eltárolni a számokat)
    /*cout << "Kerek 10 szamot: " << endl;
    double osszeg = 0;
    int tomb[10];
    for (int i = 0; i < 10; i++) {
        cin >> tomb[i];
        osszeg += tomb[i];
    }
    cout << "A szamok atlaga: " << osszeg / 10 << endl;
    cout << "Az atlagnal kisebb szamok: " << endl;
    for (int i = 0; i < 10; i++) {
        if (tomb[i] < (osszeg / 10)) cout << tomb[i] << " ";
    }*/

    //# Olvassuk be két 3-dimenziós vektor koordinátáit; Írjuk ki a vektorok összegét, különbségét; A dimenzió legyen #define-nal megadva
    /*double v1[dimenzio];
    double v2[dimenzio];
    double osszeg[dimenzio];
    double kulonbseg[dimenzio];
    cout << "Kerem az elso vektor koordinatait: " << endl;
    for (int i = 0; i < dimenzio; i++) {
        cin >> v1[i];
    }
    cout << "Kerem a masodik vektor koordinatait: " << endl;
    for (int i = 0; i < dimenzio; i++) {
        cin >> v2[i];
    }
    for (int i = 0; i < dimenzio; i++) {
        osszeg[i] = v1[i] + v2[i];
        kulonbseg[i] = v1[i] - v2[i];
    }
    cout << "A vektorok osszege: " << endl;
    for (int i = 0; i < dimenzio; i++) {
        cout << osszeg[i] << " ";
    }
    cout << "\nA vektorok kulonbsege: " << endl;
    for (int i = 0; i < dimenzio; i++) {
        cout << kulonbseg[i] << " ";
    }*/

    /* # Olvassunk be 10 számot egy tömbbe;
       # Kérjünk be további számokat, és mondjuk meg, hányszor szerepeltek a 10 elemű tömbben;
       # Ha egyszer sem szerepelt, álljon le a program */
    /*int tomb[10];
    int szam, elof = 0;
    cout << "Kerek 10 szamot: " << endl;
    for (int i = 0; i < 10; i++) {
        cin >> tomb[i];
    }
    do {
        cout << "\nKerek egy szamot: " << endl;
        cin >> szam;
        for (int i = 0; i < 10; i++) {
            if (tomb[i] == szam) elof++;
        }
        if (elof > 0) cout << "\nA " << szam << " " << elof << "-szor/-szer fordult elo a tombben.";
        else break;
        elof = 0;
    }
    while (szam != 0);*/

    /* # Olvassunk be 10 számot egy tömbbe
       # Kérjünk be két sorszámot, és cseréljük fel a megfelelő sorszámú elemeket, majd írjuk ki a tömböt
       # Addig ismételjük, amíg érvénytelen sorszámot nem kapunk (<1 vagy >10) */
    /*int tomb[10];
    int temp = 0, a, b;
    cout << "Kerek 10 szamot: " << endl;
    for (int i = 0; i < 10; i++) {
        cin >> tomb[i];
    }
    cout << "A tomb: " << endl;
    for (int i = 0; i < 10; ++i) {
        cout << tomb[i] << " ";
    }
    do {
        cout << "\nKerek ket sorszamot: " << endl;
        cin >> a;
        cin >> b;
        // Csere
            temp = tomb[a];
            tomb[a] = tomb[b];
            tomb[b] = temp;
        cout << "Az uj tomb: " << endl;
        for (int i = 0; i < 10; ++i) {
            cout << tomb[i] << " ";
        }
    }
    while (((a >= 0) and (a <= 9)) or ((b >= 0) and (b <= 9)));*/

    /* # Olvassunk be 5 számot egy tömbbe
       # Kérjünk be további számokat, és ennyivel shifteljük jobbra az elemeket, majd írjuk ki a tömböt
       # Negatív szám esetén balra shifteljen, és 5-nél nagyobbra is működjön
       # Addig ismételjük, amíg nem 0-t kapunk */

    //          I M P O S S I B L E


}
