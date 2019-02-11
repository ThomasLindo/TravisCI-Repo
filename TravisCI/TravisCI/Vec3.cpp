#include "Vec3.h"
#include <math.h>
#include <gtest/gtest.h>

Vec3::Vec3(double a, double b, double c)
{
	
	x = a;
	y = b;
	z = c;
}


double Vec3::GetMagnitude() {
	return sqrt((pow(x,2) + pow(y, 2) + pow(z, 2)));
}

Vec3 Vec3::crossProduct(Vec3 other) {
	double a, b, c;
	a = y * other.z - z * other.y;
	b = z * other.x - x * other.z;
	c = x * other.y - y * other.x;

	return Vec3(a, b, c);
}

double Vec3::dotProductScalar(Vec3 other) {
	return (x * other.x + y * other.y + z * other.z);
}

double Vec3::projecttionScalar(Vec3 other) {
	return (dotProductScalar(other) / GetMagnitude());
}

Vec3 Vec3::add(Vec3 other) {

	return Vec3(x + other.x, y + other.y, z + other.z);
}

Vec3 Vec3::subtract(Vec3 other) {
	return Vec3(x - other.x, y - other.y, z - other.z);
}

Vec3 Vec3::multiply(double mult) {
	return Vec3(x*mult, y*mult, z*mult);
}
void Vec3::setX(double a) {
	x = a;
}

void Vec3::setY(double b) {
	y = b;
}

void Vec3::setZ(double c) {
	z = c;
}

double Vec3::getX() {
	return x;
}

double Vec3::getY() {
	return y;
}

double Vec3::getZ() {
	return z;
}

TEST(FunctionTest, dicks) {
	EXPECT_EQ(20, (1+18));
}