#include<iostream>
using namespace std;

int main() {
    cout << "Ez az elso C++ programunk!" << endl;

    //Kérjünk be egy számot (int) és írjuk ki a kétszeresét
    /*cout << "Kerek egy szamot: ";
    int szam;
    cin >> szam;

    cout << "A szam ketszerese: ";
    cout << szam * 2;*/

    //Kérjünk be két számot (int) és írjuk ki az összegüket; szorzatukat; a szorzat és az összeg különbségét
    /*cout << "Kerek ket szamot: " << endl;
    int a, b;
    cin >> a >> b;

    cout << "A szamok osszege: " << a + b << endl;
    cout << "A szamok szorzata: " << a * b << endl;
    cout << "A szorzat es az osszeg kulonbsege: " << (a * b) - (a + b);*/

    //Kérjünk be egy számot és írjuk ki az abszolút értékét (Többféle kiíratás megmutatása, pl. értékadással, anélkül, -x, -1*x)
    /*cout << "Kerek egy szamot: ";
    int szam;
    cin >> szam;

    cout << "A szam abszolut erteke: " << -szam;
    cout << "A szam abszolut erteke: " << -1 * szam;*/

    //Ha a szám páros, írjuk ki a felét
    /*cout << "Kerek egy szamot: ";
    int szam;
    cin >> szam;
    if (szam % 2 == 0) {
        cout << "A szam fele: " << szam / 2;
    }
    else cout << "A szam nem paros!";*/

    //Nézzük meg, páratlan szám esetén mi lesz a 2-vel való osztás eredménye
    /*cout << "Kerek egy szamot: ";
    int szam;
    cin >> szam;
    cout << "A szam fele: " << szam / 2;*/

    //Kérjünk be két számot, ha az első nagyobb, írjuk ki a különbségüket; Ha mindkét szám kisebb, mint 10, akkor írjuk ki a szorzatukat is
    /*cout << "Kerek ket szamot: " << endl;
    int a, b;
    cin >> a >> b;

    if (a > b) {
        cout << "A ket szam kulonbsege: " << a - b << endl;
        if ((a < 10) and (b < 10)) {
            cout << "A ket szam szorzata: " << a * b;
        }
    }
    else cout << "Az elso szam kisebb.";*/

    //Írjuk ki a számokat 1-től 100-ig
    /*for (int i = 1; i < 101; i++) {
        cout << i << " ";
    }*/

    //Kérjük be N értékét, majd írjuk ki a számokat 1-től N-ig; Ellenőrizzük, hogy N>1; A végén írjuk ki a számok összegét; Csak a páros számokat írjuk ki
    /*cout << "Kerem az N erteket: ";
    int N, osszeg = 0;
    cin >> N;
    if (N > 1) {
        for (int i = 1; i < N + 1; i++) {
            cout << i << " ";
            osszeg = osszeg + i;
        }
    }
    else cout << "Az N nem nagyobb mint 1." << endl;

    cout << endl << "A szamok osszege: " << osszeg << endl;

    cout << "Csak a paros szamokat irjuk ki: " << endl;
    if (N > 1) {
        for (int i = 1; i < N + 1; i++) {
            if(i % 2 == 0) {
                cout << i << " ";
            }
        }
    }*/

    //Opcionális feladat: kérjünk be két számot, majd soroljuk fel a köztük lévő számokat, ha az első szám nagyobb, akkor csökkenő sorrendben
    /*cout << "Kerek ket szamot: " << endl;
    int a, b;
    cin >> a >> b;
    cout << "A ket szam kozti szamok: " << endl;
    if (a < b) {
        for (int i = a + 1; i < b; i++) {
            cout << i << " ";
        }
    }
    else {
        for (int i = a - 1; i > b; i--) {
            cout << i << " ";
        }
    }*/

    //Kérjük be N értékét, majd írjuk ki a faktoriálisát
    /*cout << "Kerem az N erteket: " << endl;
    int N, faktorialis = 1;
    cin >> N;
    for (int i = 1; i <= N; i++) {
        faktorialis = faktorialis * i;
    }
    cout << "Az " << N << " faktorialisa: " << faktorialis;*/

    //Fizzbuzz: Koncentrációs játék, ahol 1-től kezdve soroljuk a számokat, és minden 3-mal osztahtó szám helyett azt kell mondani, hogy Fizz, az 5-tel oszthatók helyett, hogy Buzz. Ha 3-mal és 5-tel is osztható a szám, akkor azt kell mondani, hogy FizzBuzz. Írjunk programot, ami ilyen módon számol 1-től 100-ig!
    /*for (int i = 1; i <= 100; i++) {
        if (i % 15 == 0) cout << "FizzBuzz ";
        else if (i % 3 == 0) cout << "Fizz ";
        else if (i % 5 == 0) cout << "Buzz ";
        else couRt << i << " ";
    }*/

    //Opcionális feladat: Kérjünk be egy számot, és mondjuk meg róla, hogy prímszám-e
    cout << "Kerek egy szamot: ";
    int szam;
    cin >> szam;
    for (int i = 2; i <= szam / 2; i++) {
        if (szam % i == 0) {
            cout << "A szam nem prim." << endl;
            break;
        }
        else {
            cout << "A szam prim." << endl;
            break;
        }
    }
}