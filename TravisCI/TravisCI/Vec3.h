#pragma once
class Vec3
{
private:
	double x;
	double y;
	double z;

public:
	Vec3(double a, double b, double c);
	double GetMagnitude();
	Vec3 crossProduct(Vec3 other);
	double dotProductScalar(Vec3 other);
	double projecttionScalar(Vec3 other);
	Vec3 add(Vec3 other);
	Vec3 subtract(Vec3 other);
	Vec3 multiply(double mult);
	void setX(double x);
	void setY(double y);
	void setZ(double z);
	double getX();
	double getY();
	double getZ();

};

