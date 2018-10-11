#include <cmath>

template<typename T>
class Vec3
{
public:
	T x, y, z;
	Vec3();
	Vec3(T x, T y, T z);
	Vec3(const Vec3& vec);
	Vec3 operator+(Vec3 vec);
	float distance_to(Vec3 vec);
	Vec3 Normalize();
	~Vec3();
};

template<typename T>
Vec3<T>::Vec3()
{
}

template<typename T>
Vec3<T>::Vec3(T x, T y, T z)
	: x(x), y(y), z(z) 
{
}

template<typename T>
Vec3<T>::Vec3(const Vec3& vec)
	: x(vec.x), y(vec.y), z(vec.z)
{
}

template<typename T>
Vec3<T> Vec3<T>::operator+(Vec3 vec) {
	Vec3<T> newVec;
	newVec.x = x + vec.x;
	newVec.y = y + vec.y;
	newVec.z = z + vec.z;
	return newVec;
}

template<typename T>
float Vec3<T>::distance_to(Vec3 vec) {
	// sqrt((x2 - x1)^2 + (y2 - y1)^2 + (z2 - z1)^2) 
	T sumX = vec.x - x;
	T sumY = vec.y - y;
	T sumZ = vec.z - z;
	return sqrt((sumX * sumX) + (sumY * sumY) + (sumZ* sumZ));
}

template<typename T>
Vec3<T> Vec3<T>::Normalize() {
	float lenght = 1 / distance_to(Vec3<T>(.0f, .0f, .0f));

	Vec3<T> newVec;
	newVec.x = x * lenght;
	newVec.y = y * lenght;
	newVec.z = z * lenght;

	return newVec;
}

template<typename T>
Vec3<T>::~Vec3()
{
}
