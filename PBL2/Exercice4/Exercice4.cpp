#include "clcorbeille2.h"

int main()
{
    CLcorbeille2* xOR;
    char x = 'x';
    char r;
    xOR = new CLcorbeille2();

    r = xOR->applyXOR('f', x);
    cout << r << endl;

    r = xOR->applyXOR(r, x);
    cout << r << endl;

    system("PAUSE");
    return 0;
}

