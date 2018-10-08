#include <iostream>
#include "Vec3.cpp"
#include "String.h"

int main() {

	// Vector3 class test
	Vec3<float> a;
	Vec3<float> b(1, 2, 3);
	Vec3<float> c(b);
	Vec3<float> d = b + c;
	Vec3<float> dNor = d.Normalize();

	std::cout << "Vector 3:" << std::endl;
	std::cout << "(" << a.x << "," << a.y << "," << a.z << ")" << std::endl;
	std::cout << "(" << b.x << "," << b.y << "," << b.z << ")" << std::endl;
	std::cout << "(" << c.x << "," << c.y << "," << c.z << ")" << std::endl;
	std::cout << "(" << d.x << "," << d.y << "," << d.z << ")" << std::endl;
	std::cout << d.distance_to(b) << std::endl;
	std::cout << "(" << dNor.x << "," << dNor.y << "," << dNor.z << ")" << std::endl << std::endl;

	// String class test
	String e("hello");
	String f(e);
	String g = e + f;
	String h;

	std::cout << "String:" << std::endl;
	std::cout << e << std::endl;
	std::cout << f << std::endl;
	std::cout << g << std::endl;

	//strcpy(h, e);

	if(g == "hellohello")
		std::cout << "true" << std::endl;

	e.clear();
	std::cout << e << std::endl;

	// Wait for input
	std::cin.get();
}