#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    //# Kérjünk be két számot, majd mondjuk meg, hogy az első a nagyobb, a második, vagy egyenlők!
    /*cout << "Kerek ket szamot: " << endl;
    int a, b;
    cin >> a;
    cin >> b;
    if (a > b) {
        cout << "Az elso nagyobb.";
    }
    else if (a < b) {
        cout << "A masodik nagyobb.";
    }
    else cout << "A ket szam egyenlo.";*/

    //# Kérjünk be számokat, amíg páratlan számot nem kapunk, és a párosoknak mindig írjuk ki a felét
    /*cout << "Kerek egy szamot: " << endl;
    int szam;
    do {
        cin >> szam;
        if (szam % 2 == 0) {
            cout << szam / 2 << endl;
        }
    }
    while (szam % 2 == 0);
    if (szam % 2 != 0) cout << szam;*/

    //# Kérjünk be számokat, míg egymás után kétszer ugyanazt a számot nem kapjuk; A végén írjuk ki, hogy hány számot olvastunk be; És hány páros számot olvastunk be?
    /*cout << "Kerek egy szamot: " << endl;
    int szam, elozo = 0, db = 1, pdb = 0;
    cin >> szam;
    if (szam % 2 == 0) pdb = 1;
    do {
        elozo = szam;
        cin >> szam;
        db ++;
        if (szam % 2 == 0) pdb++;
    }
    while (szam != elozo);
    if (elozo == szam) cout << "Egymas utan ketszer ugyan az a szam." << endl;
    cout << "A szamok darabszama: " << db << endl;
    cout << "A paros szamok darabszama: " << pdb << endl;*/

    //# Kérjünk egy számot, rajzoljunk ennyi karakter széles négyzetet a képernyőre
    /*cout << "Kerek egy szamot: " << endl;
    int szam;
    cin >> szam;
    for (int i = 0; i < szam; i++) {
        for (int j = 0; j < szam; j++) {
            cout << "*";
        }
        cout << endl;
    }*/

    //# Kérjünk egy számot, rajzoljunk ennyi karakter széles üres négyzetet a képernyőre; Rajzoljuk be a két átlót is
    /*cout << "Kerek egy szamot: " << endl;
    int szam;
    cin >> szam;
    for (int i = 0; i < szam; i++) {
        for (int j = 0; j < szam; j++) {
            if (i == 0 || i == szam - 1 || j == 0 || j == szam - 1) cout << "*";
            else cout << " ";
        }
        cout << endl;
    }

    for (int i = 1; i <= szam; i++)
    {
        for (int j = 1; j <= szam; j++)
        {
            if (i == 1 || i == szam || j == 1 || j == szam || i == j || j == (szam - i + 1)) cout << "*";
            else cout << " ";
        }
        cout << "\n";
    }*/

    //# Magasság bekérése után lépcső kirajzolása (i. sorban i db '*'); Lépcső függőlegesen tükrözve (jobbra igazítva a csillagokat)
    /*cout << "Kerek egy szamot: " << endl;
    int szam;
    cin >> szam;
    for (int i = 0; i < szam; i++) {
        for (int j = 0; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = 0; i < szam; i++) {
        for (int j = 0; j < szam-i+1; j++) {
            cout << " ";
        }
        for (int j = 0; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }*/

    /*
    #Menü program, szám megadásával adható ki a parancs (érvénytelen számra kilép)
        #1. Összeadás (bekér két számot és kiírja az összeget)
        #2. Szorzás
        #3. Hatványozás
        #4. Számtani sorozat a0 és d alapján n elem (önálló feladat, a három paramétert be kell kérni)
     */

    cout << "Kerem a parancs szamat: ";
    int szam, a, b, d, n, jelenszam, hatvany = 1;
    cin >> szam;
    if (szam == 1) {
        cout << "\nMelyik ket szamot szeretne osszeadni: ";
        cin >> a;
        cin >> b;
        cout << "A ket szam osszege: " << a + b;
    }
    else if (szam == 2) {
        cout << "\nMelyik ket szamot szeretne osszeszorozni: ";
        cin >> a;
        cin >> b;
        cout << "A ket szam szorzata: " << a * b;
    }
    else if (szam == 3) {
        cout << "\nMelyik szamot szeretne hatvanyozni: ";
        cin >> a;
        cout << "\nHanyadik hatvanyra szeretne emelni: ";
        cin >> b;
        for (int i = 1; i <= b; i++) {
            hatvany = hatvany * a;
        }
        cout << "\nA(z) " << a << " " << b << ". hatvanya: " << hatvany;
    }
    else if (szam == 4) {
        cout << "\nAdja meg az elso elemet; a differenciat; az utolso elem sorszamat: ";
        cin >> a;
        cin >> d;
        cin >> n;
        jelenszam = a;
        for (int i = 1; i <= n; ++i) {
            cout << jelenszam << " ";
            jelenszam = jelenszam + d;
        }
    }
    else cout << "\nNincs ilyen menupont!";

}
