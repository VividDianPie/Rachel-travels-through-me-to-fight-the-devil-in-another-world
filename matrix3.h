#pragma once
#include <windows.h>
class Matrix3 : public XFORM
{							
public:	
	Matrix3();
	void Identity();
	void Translation(float x, float y);
	void RotationA(float angle);
	void RotationR(float r);
	void Scoling(float x, float y);
	Matrix3 operator *(const Matrix3& m);
};