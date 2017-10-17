#pragma once

class Point2D
{
	int mX;
	int mY;

public:
	Point2D();
	Point2D(int x, int y);
	Point2D operator + (const Point2D & other);
	Point2D operator - (const Point2D & other);
	Point2D operator * (int other);
	int GetX();
	int GetY();
	void PrintPoint();
	bool Point2D::operator ==(Point2D & other);
};