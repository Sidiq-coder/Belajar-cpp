#include <iostream>
using namespace std;
int main() {
    int x;
    cin >> x;
    int data[x];
    for(int i = 0; i < x; i++){
        cin >> data[i];
    }
    // int n = sizeof(data) / sizeof(data[0]);
    // cout << sizeof(data);
    // Mencari nilai maksimum di dalam array
    int max = data[0];
    for (int i = 1; i < x; ++i) {
        if (data[i] > max) {
            max = data[i];
        }
    }

    // Membuat array frekuensi dengan ukuran maksimum
    int freq[max + 1] = {0};
    for (int i = 0; i < x; ++i) {
        freq[data[i]]++;
    }

    // Mencari modus
    int maxFreq = 0;
    int modus = -1;
    for (int i = 0; i <= max; ++i) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            modus = i;
        }
    }

    if (modus != -1) {
        std::cout << "Modus: " << modus << " muncul sebanyak " << maxFreq << " kali." << std::endl;
    } else {
        std::cout << "Tidak ada modus dalam array." << std::endl;
    }

    return 0;
}

