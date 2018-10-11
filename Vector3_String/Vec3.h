#ifndef VEC3_H
#define VEC3_H

template<typename T>
class Vec3
{
public:
	T x, y, z;

	Vec3()
	{
		x = 0;
		y = 0;
		z = 0;
	}

	Vec3(T x, T y, T z)
		: x(x), y(y), z(z)
	{
	}

	Vec3(const Vec3& vec)
		: x(vec.x), y(vec.y), z(vec.z)
	{
	}

	Vec3<T> operator+(const Vec3& vec) const {
		Vec3<T> newVec;
		newVec.x = x + vec.x;
		newVec.y = y + vec.y;
		newVec.z = z + vec.z;
		return newVec;
	}

	float distance_to(const Vec3& vec) const {
		// sqrt((x2 - x1)^2 + (y2 - y1)^2 + (z2 - z1)^2) 
		T sumX = vec.x - x;
		T sumY = vec.y - y;
		T sumZ = vec.z - z;
		return sqrt((sumX * sumX) + (sumY * sumY) + (sumZ* sumZ));
	}

	Vec3<T> Normalize() {
		float lenght = 1 / distance_to(Vec3<T>(.0f, .0f, .0f));

		Vec3<T> newVec;
		newVec.x = x * lenght;
		newVec.y = y * lenght;
		newVec.z = z * lenght;

		return newVec;
	}

	~Vec3() {}
};

#endif

