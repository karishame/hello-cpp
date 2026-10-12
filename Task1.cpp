#include <iostream>
using namespace std;
int main()
{
    double a = 1000.0, b = 0.0001;
    double chislitel = (a + b) * (a + b) - (a * a + 2 * a * b);
    double znamenatel = b * b;
    double result = chislitel / znamenatel;
    
    cout << "Rezultat: " << result << endl; // 1
    return 0;
}
