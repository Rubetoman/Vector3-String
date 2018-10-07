#ifndef VEC3_H
#define VEC3_H

class Vec3
{
public:
	float x, y, z;
	Vec3();
	Vec3(float x, float y, float z);
	Vec3(const Vec3& vec);
	Vec3 operator+(Vec3 vec);
	float distance_to(Vec3 vec);
	Vec3 Normalize();
	~Vec3();
};

#endif

