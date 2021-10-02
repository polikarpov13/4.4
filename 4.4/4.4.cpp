#include <iostream>
#include <iomanip> 
#include <cmath> 

using namespace std;

int main()
{
    double R, xp, xk, dx, x, y;

    cout << "R = ";

    cin >> R;

    cout << endl;

    cout << "XP = ";

    cin >> xp;

    cout << endl;

    cout << "XK = ";

    cin >> xk;

    cout << endl;

    cout << "DX = ";

    cin >> dx;

    cout << endl;

    x = xp;

    cout << fixed;

    cout << "---------------------------" << endl;

    cout << "|" << setw(5) << "x" << "   |"

        << setw(7) << "Y" << "    |" << endl;

    cout << "---------------------------" << endl;

    while (x <= xk) {

        if (x < (-1 - R))
            y = -x - 2;
        else
            if ((x > (-1 - R)) && x <= -1)
                y = sqrt(pow(R, 2) - pow((x + 1), 2));
            else
                if ((x > -1) && x <= 1)
                    y = R;
                else
                    if ((x > 1) && x <= 2)
                        y = R + (-1 - R) * (x - 1);
                    else
                        y = -1;

        cout << "|" << setw(7) << setprecision(2) << x

            << " |" << setw(10) << setprecision(3) << y

            << " |" << endl;

        x += dx;
    }


    system("pause");
    return 0;


}
