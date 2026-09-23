#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double alpha; // вхідний параметр
    double z1;    // результат 1-го виразу
    double z2;    // результат 2-го виразу

    double Pi = 4 * atan(1.); // число пі

    cout << "alpha = ";
    cin >> alpha;

   // z1 = 1 + cos(2 * alpha) + sin(2 * alpha);
    z2 = 2 * sqrt(2) * cos(alpha) * sin(Pi / 4 + alpha);

    cout << endl;
   // cout << "z1 = " << z1 << endl;
    cout << "z2 = " << z2 << endl;

    cin.get();
    cin.get();
    return 0;
}