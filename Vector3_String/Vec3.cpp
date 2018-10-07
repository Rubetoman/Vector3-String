#include "Vec3.h"
#include <cmath>


Vec3::Vec3()
{
}


Vec3::~Vec3()
{
}

Vec3::Vec3(float x, float y, float z)
	: x(x), y(y), z(z) 
{
}

Vec3::Vec3(const Vec3& vec)
	: x(vec.x), y(vec.y), z(vec.z)
{
}

Vec3 Vec3::operator+(Vec3 vec) {
	Vec3 newVec;
	newVec.x = x + vec.x;
	newVec.y = y + vec.y;
	newVec.z = z + vec.z;
	return newVec;
}

float Vec3::distance_to(Vec3 vec) {
	// sqrt((x2 - x1)^2 + (y2 - y1)^2 + (z2 - z1)^2) 
	float sumX = vec.x - x;
	float sumY = vec.y - y;
	float sumZ = vec.z - z;
	return sqrt(pow(sumX, 2) + pow(sumY, 2) + pow(sumY, 2));
}

Vec3 Vec3::Normalize() {
	float lenght = distance_to(Vec3(.0f, .0f, .0f));

	Vec3 newVec;
	newVec.x = x / lenght;
	newVec.y = y / lenght;
	newVec.z = z / lenght;

	return newVec;
}
