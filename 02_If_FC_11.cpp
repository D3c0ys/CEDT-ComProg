// 02_If_FC_11  02_If_FC_★_Median5 (flowchart)
#include <iostream>
using namespace std;

int main() {
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;

    if (a > b) swap(a, b);
    if (c > d) swap(c, d);

    if (a > c) {
        swap(b, d);
        c = a;
    }

    a = e;

    if (a > b) swap(a, b);

    if (c > a) {
        swap(b, d);
        a = c;
    }

    if (a > d)
        cout << d << endl;
    else
        cout << a << endl;

    return 0;
}
