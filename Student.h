#pragma once
#include <iostream>
#include <vector>
#include <string>
class Group;
class StudentDefault;
class StudentCouncil;
class StudentGroup;

using namespace std;

class Student
{
private:

	vector<string> Groups;

public:

	Student() {};

	Student(const string& Name);

	string Name;

	virtual int GetRating() = 0;

	void joinGroup(StudentGroup& group);

	const string& getName();

	void StudentInfo();

	void leaveGroup(const string& GroupName);


};