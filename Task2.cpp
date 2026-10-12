#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cout << "Vvedite n i m: "; // Ввод чисел
    cin >> n >> m;

    int res1 = n++ + m;      // n+++m
    bool res2 = (m-- > n);   // m-- > n
    bool res3 = (n-- > m);   // n-- > m

    cout << "1) n+++m = " << res1 << endl;   // 8
    cout << "2) m-- > n = " << res2 << endl; // 0
    cout << "3) n-- > m = " << res3 << endl; // 1
    return 0;
}
