#pragma once

class vector2D
{
public:
	float x;
	float y;
	
	vector2D(float x = 0, float y = 0);
	vector2D Normalize()const;
	float Distance()const;
	vector2D operator +(const vector2D& v);
	vector2D& operator +=(const vector2D& v);
	vector2D operator -(const vector2D& v);
	vector2D& operator -=(const vector2D& v);
	//负向量
	vector2D operator -();
	//点乘
	float operator *(const vector2D& v);
	vector2D operator /(float f);
	vector2D& operator /=(float f);
	//数乘
	vector2D operator *(float f);
	vector2D& operator *=(float f);
};

inline vector2D operator *(float f, const vector2D& v)
{
	return vector2D(v.x * f, v.y * f);
}