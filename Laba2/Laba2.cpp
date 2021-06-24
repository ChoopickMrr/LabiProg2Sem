#include <iostream>
#include <time.h>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    srand(time(NULL));
    int length;
    cout << "Введите длину пароля: ";
    cin >> length;
    {
        for (int j = 0; j < length; j++) {
            cout << static_cast<char>(rand() % 48 + 48) << "";
        }
        cout << endl;
    }
    system("PAUSE");
    return 0;
}