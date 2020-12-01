#include <iostream>
using namespace std;

// g(x) = g(x-3) + 1 if x >0, or 3x if x <= 0

void printTabs(int depth) {
    for (int i = 0; i < depth; i++) {
        cout << "    ";
    }
}

int g(int x, int depth) {
    int result;
    if (x > 0) {
        result = g(x-3, depth+1) + 1;
        printTabs(depth);
        cout << "g(" << x << ") = g(" << x-3 << ") + 1 = " << result << "\n";
    }
    else {
        // Base case / stopping condition
        result = 3*x;
        printTabs(depth);
        cout << "g(" << x << ") = 3*" << x << "= " << result << "\n";
        
    }
    return result;
}

int h(int x, int depth) {
    int result;
    if (x > 5) {
        result = h(x-7, depth+1) + 1;
        printTabs(depth);
        cout << "h(" << x << ") = h(" << x-7 << ") + 1 = " << result << "\n";
    }
    else if (x >= 0 && x <= 5) {
        result = x;
        printTabs(depth);
        cout << "h(" << x << ") = " << x << "\n";
    }
    else {
        result = h(x+3, depth+1);
        printTabs(depth);
        cout <<  "h(" << x << ") = h(" << x+3 << ") = " << result << "\n";
    }
    return result;
}

int f(int x, int y) {
    if (x > y) {
        return f(x-y, y-1) + 2;
    }
    else {
        return x+y;
    }
}

int A(int m, int n) {
    if (m == 0) {
        return n+1;
    }
    else if (n == 0) {
        // A(m, 0) = A(m-1, 1)
        //     m = 5, A(5, 0) = A(4, 1)
        return A(m-1, 1);
    }
    else {
        // A(m, n) = A(m-1, A(m, n-1))
        return A(m-1, A(m, n-1));
    }
}

int main() {
    cout << A(4, 3) << endl;
    return 0;
}