#include <iostream>

using namespace std;

int main() {
    
    while (1) {
        int m, n;

        cin >> m >> n;
        
        if (m == 0 && n == 0) break;
        
        if (n % m == 0) {
            cout << "factor" << endl;
        } else if (m % n == 0) {
            cout << "multiple" << endl;
        } else {
            cout << "neither" << endl;
        }
    }
    
    return 0;
}
