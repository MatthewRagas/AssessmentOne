#include<iostream>
#include"Point2D.h"

Point2D::Point2D()
{

}

Point2D::Point2D(float x, float y)
{
	mX = x;
	mY = y;
}

Point2D Point2D::operator+(const Point2D & other)
{
	Point2D temp;
	temp.mX = mX + other.mX;
	temp.mY = mY + other.mY;
	return temp;
}

Point2D Point2D::operator-(const Point2D & other)
{
	Point2D temp;
	temp.mX = mX - other.mX;
	temp.mY = mY - other.mY;
	return temp;
}

bool Point2D::operator ==(const Point2D & other)
{
	Point2D temp;
	if (temp.mX == other.mX && temp.mY == other.mY)
		return true;
	return false;
}

Point2D Point2D::operator*(float other)
{
	Point2D temp;
	temp.mX = mX * other;
	temp.mY = mY * other;
	return temp;
}

float Point2D::GetX()
{
	return mX;
}

float Point2D::GetY()
{
	return mY;
}

void Point2D::PrintPoint()
{
	std::cout << "Current point: " << mX << ", " << mY << std::endl;
}
