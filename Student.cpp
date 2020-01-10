#include "Student.h"
#include "StudentGroup.h"



Student::Student(const string& Name) {
	this->Name = Name;
}

const string& Student::getName() {
	return Name;
}

void Student::joinGroup(StudentGroup& group) {

	if (group.fillGroup(this)) {
		Groups.push_back(group.GetGroupName());
	}
}

void Student::StudentInfo() {
	cout << "\n_____________________\n";
	cout << "���������� � �������� :" << endl;
	cout << "��� - " << this->getName() << " ������ - ";
	for (auto i = Groups.begin(); i != Groups.end(); i++) {
		cout << *i << " ";
	}
	cout << "\n_____________________\n";
}


void Student::leaveGroup(const string& GroupName) {
	for (auto i = Groups.begin(); i != Groups.end(); i++) {
		if (GroupName == *(i)) {
			Groups.erase(i);		
			break;
		}
	}
}

