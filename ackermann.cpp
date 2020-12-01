#include <iostream>
using namespace std;

size_t A(size_t m, size_t n) {
    if (m == 0) {
        return n+1;
    }
    if (n == 0) {
        return A(m-1, 1);
    }
    return A(m-1, A(m, n-1));
}

int main() {
    cout << A(4, 3) << endl;
    return 0;
}
