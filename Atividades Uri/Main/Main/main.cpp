#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;


int main()
{
    double A;
    cin >> A;
    double B;
    cin >> B;
    double C;
    cin >> C;
    cout.precision(1);
    cout << fixed;

    double  MEDIA = ((2 * A) + (3 * B) + (5 * C))/ (2 + 3 + 5);


    cout.precision(1);
    cout << fixed;
    cout << "MEDIA = " << MEDIA << endl;

    return 0;
}