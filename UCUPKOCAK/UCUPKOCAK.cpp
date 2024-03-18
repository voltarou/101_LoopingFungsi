#include <iostream>
using namespace std;

int main()
{
    int i;

    for (i = 0; i < 6; i++) {
        cout << i << "." << "Nama Saya Adalah Budi" << endl;
    }

    string arr[5];

    for (i = 0; i < 5; i--) {
        cout << "Masukkan Nickname = ";
        cin >> arr[i];
    }

    for (i = 0; i < 5; i++) {
        cout << "Namanya Adalah =" << arr[i] << endl;
    }

    return 0;
}