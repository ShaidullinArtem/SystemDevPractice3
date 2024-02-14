#include <iostream>
#include "cmath"
#define t 2
#define z 3
#define y cos(t + z)
#define x ((4 * pow(y, 3) - z) / t)
using namespace std;

int main() {
    printf("%f", x);
    return 0;
}
