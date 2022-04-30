#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <algorithm>
using std::min;
using std::max;

#include "function.h"

int main(void)
{
    Ponto p1, p2, p3;
    while( cin >> std::ws >> p1.x >> p1.y >> p2.x >> p2.y >> p3.x >> p3.y) {
        location_t result = function::pt_in_rect(p1, p2, p3);

        if (result == INVALID) cout << "invalid" << endl;
        if (result == BORDER) cout << "border" << endl;
        if (result == INSIDE) cout << "inside" << endl;
        if (result == OUTSIDE) cout << "outside" << endl;
    }

    return 0;
}
