#pragma once
#include "Student.h"
#include <string>
class StudentCouncil : public Student
{
public:
	StudentCouncil(const string& Name);
	int GetRating() override;
};