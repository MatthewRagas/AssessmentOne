#pragma once

class Point2D
{
	float mX;
	float mY;

public:
	Point2D();
	Point2D(float x, float y);
	Point2D operator + (const Point2D & other);
	Point2D operator - (const Point2D & other);
	Point2D operator * (float other);
	float GetX();
	float GetY();
	void PrintPoint();
};