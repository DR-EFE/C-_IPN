#include <iostream>
using namespace std;

int recursiva(int a, int b) {
    if (b == 0) {
        return 1;
    } else {
        return b+ (recursiva(a, b - 1));
    }
}

int main() {
    int x, y;
    cout << "Escribe x: ";
    cin >> x;
    cout << "Escribe y: ";
    cin >> y;
    cout << recursiva(x, y) << endl;
    return 0;
}