#include "assignemnt1.h"
#include "assignmentt.h"
#include <iostream>
#include <string>
using namespace std;
void Person::class Person(string Name, int Id;) {
	this->Name = Name;
	this->Id = Id;
}
void Student::class Student(int YearLevel, string Major) {
	this->YearLevel = YearLevel;
	this->Major = Major;
}
void Instructor:: class Instructor(string Department, int ExperienceYears) {
	this->Departement = Department;
	this->ExperienceYears = ExperienceYears;
}
void Course:: class Course(string CourseCode, string CourseName, int maxStudents, Student* students, int CurrentStudents) {
	this->CourseCode = CourseCode;
	this->CourseName = CourseName;
	this->maxStudents = maxStudents;
	this->CurrentStudents = CurrentStudents;
}
	void Person::display() {
		cout << "name:" << Name;
		cout << "id:" << Id;

	}
	void Student::displayInfo() {
		cout << "YearLevel:" << YearLevel << endl;
		cout << "major:" << Major << endl;
	}
	void instructor::display() {
		cout << "department:" << Department << endl;
		cout << "experienceYear:" << ExperienceYear << endl;

	}
	class Course::addStudent(const Student& s){
	}
	void Course::displayCourseInfo() {
		cout << "CourseCode:" << Course::CourseCode << endl;
		cout << "CourseName" << Course::CourseName << endl;
		cout << "maxStudents" << Course::maxStudents << endl;
	 }
	;


// ==================== Person Class Implementation =========================








// ==================== Student Class Implementation ====================






// ==================== Instructor Class Implementation ====================






// ==================== Course Class Implementation ====================








// ==================== Main Function ====================
int main() {
   
    
    return 0;
}
