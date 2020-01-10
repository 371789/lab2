#include <iostream>
#include <algorithm>
#include "StudentGroup.h"
#include "Student.h"

using namespace std;


const string& StudentGroup::GetGroupName() {
	return nameGroup;
}

StudentGroup::StudentGroup(const string& nameGroup) {
	this->nameGroup = nameGroup;
}

bool StudentGroup::fillGroup(Student* student) {

	if (Students.size() < 5) {

		Students.push_back(student);
		cout << "������� " << student->getName() << " �������� � " << nameGroup << endl;
		return true;
	}
	else
	{
		cout << "??? " << student->getName() << " �� ����� ���� �������� � " << nameGroup << " �.�. ��� ���������\n";
		return false;
	}
}

void StudentGroup::kickStudent(Student* student) {
	for (auto i = Students.begin(); i != Students.end(); i++) {
		if (student == *i) {
			cout << "!!! " << "������� " << student->getName() << " �������� �� " << nameGroup << endl;
			Students.erase(i);
			student->leaveGroup(this->nameGroup);
			break;
		}
	}
}


void StudentGroup::sortStudent() {
	cout << "\n_____________________\n";
	cout << "�������� ������ " << this->GetGroupName() << ":\n";
	sort(Students.begin(), Students.end());

	for (int i = 0; i < Students.size(); i++) {
		cout << Students[i]->getName() << endl;
	}
}

void StudentGroup::Exam() {

	cout << "| ��������� ��������� ����� ��������: " << endl;
	cout << "| " << endl;
	for (int i = 0; i < Students.size(); i++) {
		if (Students[i]->GetRating() < 3) {

			cout << "| Student " << Students[i]->getName() << " ��������� �� - �� ������������! "<< endl;
			Students[i]->leaveGroup(this->nameGroup);


			
		}
	}
	cout << "-----------------------------------------" << endl;
}
