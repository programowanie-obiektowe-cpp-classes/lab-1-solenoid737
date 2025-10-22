#include <math.h>
//#include <print>

class Wektor2D
{
public:
    // Tutaj napisz implementacje klasy Wektor2D
    Wektor2D() // konstruktor domyslny
    {
        x = 0;
        y = 0;
        //std::println("wspolrzedne: x = {}, y = {}", x, y);
    };

    Wektor2D(double a, double b) // konstruktor
    {
        x = a;
        y = b;
        //std::println("wspolrzedne: x = {}, y = {}", x, y);
    };

    ~Wektor2D() // destruktor
    {};

    void setX(int a) { x = a; };
    void setY(int b) { y = b; };

    int getX() { return x; };
    int getY() { return y; };

    double x;
    double y;
};

Wektor2D operator+(Wektor2D v1, Wektor2D v2)
{
    double sumx, sumy;
    sumx = v1.getX() + v2.getX();
    sumy = v1.getY() + v2.getY();

    return Wektor2D{sumx, sumy};
};

double operator*(Wektor2D v1, Wektor2D v2)
{
    double scalar;
    scalar = v1.getX() * v2.getX() + v1.getY() * v2.getY();
    return scalar;
};