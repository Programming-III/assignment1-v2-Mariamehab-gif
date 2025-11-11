#ifndef assignment1.h
#define assignment1.h
#include <iostream>
#include <string>
using namespace std;
class Person {
private:
	string Name;
	int Id;
public:
	void display();
};
class Student {
private:
	int YearLevel;
	string Major;
public:
	void displayInfo();
};
class instructor {
private:
	string Department;
	int ExperienceYear;
public:
	void display();
};
#endif
