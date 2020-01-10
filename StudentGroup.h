#pragma once
#include "Student.h"
#include "StudentDef.h"
#include "StudentBotan.h"
#include "StudentCouncil.h"
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class StudentGroup
{
private:
	string nameGroup;
	vector <Student*> Students;

public:
	const string& GetGroupName();

	StudentGroup(const string& nameGroup);

	bool fillGroup(Student* student);

	void kickStudent(Student* student);

	void sortStudent();

	void Exam();
};