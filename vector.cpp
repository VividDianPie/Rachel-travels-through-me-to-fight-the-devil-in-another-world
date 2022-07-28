#include "vector.h"
#include <math.h>
vector2D::vector2D(float x, float y)
{
	this->x = x;
	this->y = y;
}
vector2D vector2D::Normalize()const
{
	float f = sqrt(x * x + y * y);
	return vector2D(x / f, y / f);
}
float vector2D::Distance()const
{
	return sqrt(x * x + y * y);
}
vector2D vector2D::operator+(const vector2D& v)
{
	return vector2D(x + v.x, y + v.y);
}

vector2D& vector2D::operator+=(const vector2D& v)
{
	x += v.x;
	y += v.y;
	return *this;
}

vector2D vector2D::operator-(const vector2D& v)
{
	return vector2D(x - v.x, y - v.y);
}

vector2D& vector2D::operator-=(const vector2D& v)
{
	x -= v.x;
	y -= v.y;
	return *this;
}

vector2D vector2D::operator-()
{
	return vector2D(-x, -y);
}

float vector2D::operator*(const vector2D& v)
{
	return x*v.x + y*v.y;
}

vector2D vector2D::operator/(float f)
{
	return vector2D(x / f, y / f);
}

vector2D& vector2D::operator/=(float f)
{
	x /= f;
	y /= f;
	return *this;
}

vector2D vector2D::operator*(float f)
{
	return vector2D(x * f, y * f);
}

vector2D& vector2D::operator*=(float f)
{
	x *= f;
	y *= f;
	return *this;
}
