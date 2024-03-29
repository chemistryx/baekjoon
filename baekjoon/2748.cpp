#include <iostream>

using namespace std;

int main() {
    
    int n;
    long fibo[91] = {0};
    
    cin >> n;
    
    fibo[0] = 0;
    fibo[1] = 1;
    
    // 3
    for (int i = 2; i <= n; i++) {
        fibo[i] = fibo[i - 1] + fibo[i - 2];
    }
    
    cout << fibo[n];
    
    return 0;
}
