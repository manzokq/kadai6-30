#include<stdio.h>
#include<iostream>
//–â‘è2
//struct  Vector2
//{
//public:
//
//	float x;
//	float y;
// 
//};


//–â‘è2
struct Vector2
{

private:
	float x = 0;
	float y = 0;

public:
	void setX(float num) { x = num; };
	void setY(float num) { y = num; };

	float getX() { return x; };
	float getY() { return y; };

};

//–â‘è3
struct Vector3
{

private:
	float x = 0;
	float y = 0;
	float z = 0;

public:
	void setX(float num) { x = num; };
	void setY(float num) { y = num; };
	void setZ(float num) { z = num; };

	float getX() { return x; };
	float getY() { return y; };
	float getZ() { return z; };
};

int main()
{
	
	
	/*–â‘è1
	Vector2 v2;

	v2.x = 1.5f;
	v2.y = 3.4f;
	std::cout << v2.x<<"\n"<< v2.y;*/

	//–â‘è2
	/*
	Vector2 v2;

	float numX = 0;
	float numY = 0;

	std::cout << "X‚ğ“ü—Í";
	std::cin >> numX;
	std::cout << "Y‚ğ“ü—Í";
	std::cin >> numY;

	v2.setX(numX);
	v2.setY(numY);

	std::cout << "\nX‚Í"<<v2.getX() <<"\nY‚Í"<< v2.getY();
	*/

	//–â‘è3
	Vector3 v3;

	float numX = 0;
	float numY = 0;
	float numZ = 0;

	std::cout << "X‚ğ“ü—Í";
	std::cin >> numX;
	std::cout << "Y‚ğ“ü—Í";
	std::cin >> numY;
	std::cout << "Z‚ğ“ü—Í";
	std::cin >> numZ;

	v3.setX(numX);
	v3.setY(numY);
	v3.setZ(numZ);

	std::cout << "\nX‚Í" << v3.getX() << "\nY‚Í" << v3.getY() << "\nZ‚Í" << v3.getZ();

}