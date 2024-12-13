#pragma once
#include <string>
using namespace System::Drawing;

ref class Figure abstract
{
public:
    Figure() : x(0), y(0), R(0) {}
    Figure(int _x, int _y, int _R) : x(_x), y(_y), R(_R) {}

    virtual void draw(Graphics^ g) = 0;
    virtual void hide(Graphics^ g) = 0;
    virtual void move(int dx, int dy, Graphics^ g) = 0;

    int x, y, R;

    ref class BorderException : System::Exception
    {
    public:
        BorderException(System::String^ message) : System::Exception(message) {}
    };

    ref class NegNumber : System::Exception
    {
    public:
        NegNumber(System::String^ message) : System::Exception(message) {}
    };
};

ref class MyCircle : public Figure
{
public:
    MyCircle(int _x, int _y, int _R) : Figure(_x, _y, _R) {}

    virtual void draw(Graphics^ g) override;
    virtual void hide(Graphics^ g) override;
    virtual void move(int dx, int dy, Graphics^ g) override;
};



ref class Complex : public Figure
{
private:
    MyStar^ s;
    MyCircle^ c;

public:
    Complex(int x, int y, int R, int r) : Figure(x, y, R)
    {
        s = gcnew MyStar(x, y, R, r);
        c = gcnew MyCircle(x, y, R);
    }

    virtual void draw(Graphics^ g) override;
    virtual void hide(Graphics^ g) override;
    virtual void move(int dx, int dy, Graphics^ g) override;
};
//Circle добавлен