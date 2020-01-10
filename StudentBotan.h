#pragma once
#include <string>

#include"Student.h"

class StudentBotan : public Student
{
public:
	StudentBotan(const string& Name);
	int GetRating() override;
};