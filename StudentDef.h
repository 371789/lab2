#pragma once
#include "Student.h"
#include <string>

class StudentDef : public Student
{
public:
	StudentDef(const string& Name);
	int GetRating() override;
};
