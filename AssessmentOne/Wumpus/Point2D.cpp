#include<iostream>
#include"Point2D.h"

Point2D::Point2D()
{
	mX = 4;
	mY = 2;
}

Point2D::Point2D(int x, int y)
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

Point2D Point2D::operator*(int other)
{
	Point2D temp;
	temp.mX = mX * other;
	temp.mY = mY * other;
	return temp;
}

int Point2D::GetX()
{
	return mX;
}

int Point2D::GetY()
{
	return mY;
}

void Point2D::PrintPoint()
{
	std::cout << "Current point: " << mX << ", " << mY << std::endl;
}

bool Point2D::operator ==(Point2D & other)
{
	if (mX == other.mX && mY == other.mY)
		return true;
	return false;
}