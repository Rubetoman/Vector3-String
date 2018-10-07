#ifndef VEC3_H
#define VEC3_H

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

#endif

