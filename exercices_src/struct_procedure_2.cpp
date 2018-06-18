#include <iostream>

using namespace std;

struct cpx {
    double real;
    double img;
};

void sum(cpx x, cpx y, cpx &z) {
    z.real = x.real + y.real + z.real;
    z.img = x.img + y.img + z.img;
}

void multiply(cpx x, cpx y, cpx &z) {
    z.real = x.real * y.real - (x.img * y.img);
    z.img = x.real * y.img + x.img * y.real;
}

int main() {
    cpx x = { 0, 4 };
    cpx y = { 2, 3 };
    cpx z = { 1, -2 };

    sum(z, x, y);

    multiply(x, y, z);

    cout << z.real << " " << z.img << endl;
}
