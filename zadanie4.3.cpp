#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double oblicz_pierwiastek(double x, double e) {
    int i = 0;
    double w = 1;
    while (abs((w * w) - x) >= e) {
        w = ((x / w) + w) / 2;
        i++;
        cout << fixed << setprecision(8) << "wynik: " << w << ", iteracja: " << i << endl;
        }
    return w;
}

int main()
{
    double x, e;
        cout << "podaj z jakiej liczby obliczyc pierwiastek oraz z jaka dokladnoscia: ";
    cin >> x >> e;
    // wynik = oblicz_pierwiastek(x, e);
    cout << "pierwiastek drugiego stopnia z: " << defaultfloat << x << " to: " << fixed << setprecision(8) << oblicz_pierwiastek(x, e);
}
