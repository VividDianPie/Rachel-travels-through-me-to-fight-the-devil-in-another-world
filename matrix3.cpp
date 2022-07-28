#include "matrix3.h"
#include <math.h>
Matrix3::Matrix3()
{
	eM11 = 1.0f; eM12 = 0;
	eM21 = 0;    eM22 = 1.0f;
	eDx = 0;    eDy = 0;
}
void Matrix3::Identity()
{
	eM11 = 1.0f; eM12 = 0;    
	eM21 = 0;    eM22 = 1.0f; 
	eDx = 0;    eDy = 0;    
}

void Matrix3::Translation(float x, float y)
{
	eM11 = 1.0f; eM12 = 0;
	eM21 = 0;    eM22 = 1.0f;
	eDx = x;    eDy = y;
}

void Matrix3::RotationA(float angle)
{
	angle = angle / 180.0f * 3.14;
	eM11 = cos(angle); eM12 = sin(angle);
	eM21 = -eM12;    eM22 = eM11;
	eDx = 0;    eDy = 0;
}

void Matrix3::RotationR(float r)
{
	eM11 = cos(r); eM12 = sin(r);
	eM21 = -eM12;    eM22 = eM11;
	eDx = 0;    eDy = 0;
}

void Matrix3::Scoling(float x, float y)
{
	eM11 = x; eM12 = 0;
	eM21 = 0;    eM22 = y;
	eDx = 0;    eDy = 0;
}

Matrix3 Matrix3::operator*(const Matrix3& m)
{
	Matrix3 nm;
	nm.eM11 = eM11 * m.eM11 + eM12 * m.eM21;
	nm.eM12 = eM11 * m.eM12 + eM12 * m.eM22;

	nm.eM21 = eM21 * m.eM11 + eM22 * m.eM21;
	nm.eM22 = eM21 * m.eM12 + eM22 * m.eM22;

	nm.eDx = eDx * m.eM11 + eDy * m.eM21 + m.eDx;
	nm.eDy = eDx * m.eM12 + eDy * m.eM22 + m.eDy;
	return nm;
}
