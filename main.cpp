#include <iostream>

using namespace std;

class rectangle {
    double x, y;    // x = longueur   y = largeur
public :
    rectangle (){x = 0; y = 0;} // constructeur par defauy
    rectangle (double a, double b){x = a; y = b;} // constructeur surchargé
    rectangle(double a){ x =a;} // surchargé

    double X(){return x;}
    double Y(){return y;}

    void X1(double x_){x = x_;}
    void Y1(double y_){y = y_;}
    double surface (){return x*y;}
    double perimetre (){return (x + y)*2;}



};


int main()
{


    rectangle R(2,3);

    cout << R.X() << endl;

    cout << R.surface() << endl;
    cout << R.perimetre() << endl;

    return 0;
}
