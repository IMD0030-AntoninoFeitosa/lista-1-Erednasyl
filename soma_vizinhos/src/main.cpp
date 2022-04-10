#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main( void )
{
    int x, y;
    while( cin >> std::ws >> x >> y) {
        int sum = x;
        //cin >> x >> y;
        bool yMoreThanZero = y > 0;

        for (int i = 0; i < std::abs(y)-1; i++)
        {
            if (yMoreThanZero){
                x++;
            }
            else {
                x--;
            }
            sum += x;
        }
        

        cout << sum << endl;
    }

    return 0;
}
