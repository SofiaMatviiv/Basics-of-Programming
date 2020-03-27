#include <iostream>
using namespace std;
int main() {
    int Mas[1000];
    int n;
    cout << "Input n:";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> Mas[i];
    }
    int min = Mas[0];
    int max = Mas[0];
    int p_mi=0, p_ma=0;
    for (int i = 0; i < n; i++) {
        if (min > Mas[i]) { min = Mas[i]; p_mi = i; }
        if (max < Mas[i]) { max = Mas[i]; p_ma = i; }
    }
    cout << "Our result:";
    for (int i = 0; i < n; i++) {
        Mas[p_ma];
        if (p_ma < i & i < p_mi) {
            cout << Mas[i] << " ";
        }
        else {
            break;
        }
    }
    cout << endl;
    system("pause");
    return 0;
}