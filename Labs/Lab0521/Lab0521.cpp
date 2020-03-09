#include <cstdlib>
#include <iostream>
using namespace std;

class Rectangle
{
private:
    double width;
    double length;
public:
    Rectangle();
    Rectangle(double, double);
    ~Rectangle();
    Rectangle(const Rectangle&);
    void setWidth(double);
    void setLength(double);
    friend ostream& operator<<(ostream&, const Rectangle&);
    class NegativeLength {};
    class NegativeWidth {};
};
Rectangle::Rectangle()
{
    this -> length = 0;
    this -> width = 0;
}
Rectangle::Rectangle(double length, double width)
{
    this -> length = length;
    this -> width = width;
}
Rectangle::~Rectangle()
{
    
}
Rectangle::Rectangle(const Rectangle& rectangle)
{
    this -> length = rectangle.length;
    this -> width = rectangle.width;
}
ostream& operator<<(ostream& out, const Rectangle& rectangle)
{
    cout << "Length: " << rectangle.length << endl;
    cout << "Width : " << rectangle.width;
    return out;
}
void Rectangle::setLength(double length)
{
    if(length < 0)
    {
        throw Rectangle::NegativeLength();
    }
    this->length = length;
}
void Rectangle::setWidth(double width)
{
    if(width < 0)
    {
        throw Rectangle::NegativeWidth();
    }
    this->length = width;
}
template<class T, class T2>
void output(T val, T2 val2)
{
    cout << val  << endl;
    cout << val2 << endl;
}
int main()
{
    /*  Rectangle r(1,2);
        Rectangle r2(7,8);
        int x = 3;
        int y = 4;
        double z = 5;
        double a = 6;
        output(r, r2);
        output(x, y);
        output(z, a);
        return 0;
     */
    try
    {
        Rectangle r;
        r.setLength(10);
        r.setWidth(-10);
    }
    catch(Rectangle::NegativeLength exception)
    {
        cout << "Length is negative!" << endl;
    }
    catch(Rectangle::NegativeWidth exception)
    {
        cout << "Width is negative!" << endl;
    }
    return 0;
}

