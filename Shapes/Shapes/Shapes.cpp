#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

#include "Circle.h"
#include "Rectangle.h"
#include "Triangle.h"

class Square {
private:
	double length;
};

class Student {
private:
	int id;
	string name;
public:
	int getId() {
		return id;
	}

	//void setId(int newId) {
	//	id = newId;
	//}

	//string getName() {
	//	return name;
	//}

	//string getPassword() {
	//	return password;
	//}

	//void setPassword(string newPassword) {
	//	password = newPassword;
	//}

	//void setName(string newName) {
	//	name = newName;
	//}
};

//double circleArea(Circle c);
//double rectangleArea(Rectangle r);
//double squareArea(Square r);
//double triangleArea(Triangle t);

int main()
{
	Circle a;
	a.setRadius(5);


	//Student john;
	//john.getName = "John";
	//john.getId = 0;


	//Circle a = { 5 };
	//Circle b = { 5 };
	//Rectangle c = { 10, 20 };
	//Rectangle d = { 20, 100 };
	//Square e = { 10 };
	//Square f = { 30 };
	//Triangle g = { 50, 10 };
	//Triangle h = { 10, 50 };
	//cout << "Circle 1 radius = " << a.radius << a.area() << endl;
}