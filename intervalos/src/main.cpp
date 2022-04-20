#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <iomanip>
using std::setprecision;

int main(void)
{
    int x;
    int numQnt = 0;
    float in025 = 0, in2550 = 0, in5075 = 0, in75100 = 0, out = 0;

    while( cin >> std::ws >> x) {
        if (x >= 0 && x < 25){
            in025++;
        }

        else if (x >= 25 && x < 50){
            in2550++;
        }

        else if(x >= 50 && x < 75){
            in5075++;
        }

        else if(x >= 75 && x < 100){
            in75100++;
        }

        else{
            out++;
        }

        numQnt++;
    }

    cout << setprecision(4) << (in025/numQnt)*100 << endl;
    cout << setprecision(4) << (in2550/numQnt)*100 << endl;
    cout << setprecision(4) << (in5075/numQnt)*100 << endl;
    cout << setprecision(4) << (in75100/numQnt)*100 << endl;
    cout << setprecision(4) << (out/numQnt)*100 << endl;

    return 0;
}
