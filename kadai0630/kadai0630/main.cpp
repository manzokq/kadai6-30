#include<stdio.h>
#include<iostream>
//問題2
//struct  Vector2
//{
//public:
//
//	float x;
//	float y;
// 
//};


//問題2
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

//問題3
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
	
	
	/*問題1
	Vector2 v2;

	v2.x = 1.5f;
	v2.y = 3.4f;
	std::cout << v2.x<<"\n"<< v2.y;*/

	//問題2
	/*
	Vector2 v2;

	float numX = 0;
	float numY = 0;

	std::cout << "Xを入力";
	std::cin >> numX;
	std::cout << "Yを入力";
	std::cin >> numY;

	v2.setX(numX);
	v2.setY(numY);

	std::cout << "\nXは"<<v2.getX() <<"\nYは"<< v2.getY();
	*/

	//問題3
	Vector3 v3;

	float numX = 0;
	float numY = 0;
	float numZ = 0;

	std::cout << "Xを入力";
	std::cin >> numX;
	std::cout << "Yを入力";
	std::cin >> numY;
	std::cout << "Zを入力";
	std::cin >> numZ;

	v3.setX(numX);
	v3.setY(numY);
	v3.setZ(numZ);

	std::cout << "\nXは" << v3.getX() << "\nYは" << v3.getY() << "\nZは" << v3.getZ();

}