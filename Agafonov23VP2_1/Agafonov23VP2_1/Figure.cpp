#include "pch.h"
#include "Figure.h"
#include "cmath"
using namespace System::Drawing;

void MyCircle::draw(Graphics^ g) {
	if ((x - R <= 0) || (x + R >= 865) || (y - R <= 0) || (y + R >= 325))
		throw gcnew BorderException{ "Выход за границы окна!" };
	if (R <= 0)
		throw gcnew NegNumber{ "Нулевые или отрицательные значения параметров!" };

	Pen^ redPen = gcnew Pen(Color::Cyan);
	redPen->Width = 3;
	// Создать прямоугольник для эллипса
	Rectangle rect = Rectangle(x - R, y - R, R * 2, R * 2);
	// Показать эллипс
	g->DrawEllipse(redPen, rect);
}

void MyCircle::hide(Graphics^ g) {
	Pen^ redPen = gcnew Pen(Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
		static_cast<System::Int32>(static_cast<System::Byte>(252))));
	redPen->Width = 3;
	Rectangle rect = Rectangle(x - R, y - R, R * 2, R * 2);
	g->DrawEllipse(redPen, rect);
}

void MyCircle::move(int dx, int dy, Graphics^ g) {
	hide(g);
	x = dx;
	y = dy;
	draw(g);
}


void MyStar::draw(Graphics^ g) {
	if ((x - R <= 0) || (x + R >= 1300) || (y - R <= 0) || (y + R >= 500))
		throw gcnew BorderException{ "Выход за границы окна!" };

	if (r >= R)
		throw gcnew IncorrectRadius{ "Внутренний радиус больше внешнего!" };


	if (r <= 0 && R <= 0)
		throw gcnew NegNumber{ "Нулевые или отрицательные значения радиусов!" };

	Pen^ pen = gcnew Pen(Color::LawnGreen, 2);

	cli::array<Point>^ p = gcnew cli::array<Point>(10);
	const double PI = acos(-1.0);
	float alpha = PI / 2;
	for (int i = 0; i < 2 * 5; i++) {
		int l = i % 2 == 0 ? r : R;
		p[i] = Point(x + l * cos(alpha), y + l * sin(alpha));
		alpha += 2 * PI / 10;
	}
	g->DrawPolygon(pen, p);
}

void MyStar::hide(Graphics^ g) {
	Pen^ pen = gcnew Pen(Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
		static_cast<System::Int32>(static_cast<System::Byte>(252))), 2);

	cli::array<Point>^ p = gcnew cli::array<Point>(10);
	const double PI = acos(-1.0);
	float alpha = PI / 2;
	for (int i = 0; i < 2 * 5; i++) {
		int l = i % 2 == 0 ? r : R;
		p[i] = Point(x + l * cos(alpha), y + l * sin(alpha));
		alpha += 2 * PI / 10;
	}
	g->DrawPolygon(pen, p);
}

void MyStar::move(int dx, int dy, Graphics^ g) {
	hide(g);
	x = dx;
	y = dy;
	draw(g);
}

void Complex::draw(Graphics^ g) {
	s->draw(g);
	c->draw(g);
}

void Complex::hide(Graphics^ g) {
	s->hide(g);
	c->hide(g);
}

void Complex::move(int dx, int dy, Graphics^ g) {
	hide(g);
	s->x = dx;
	s->y = dy;
	c->x = dx;
	c->y = dy;
	draw(g);
}
