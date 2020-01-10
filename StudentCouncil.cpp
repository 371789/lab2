#include "StudentCouncil.h"
#include "StudentCouncil.h"

StudentCouncil::StudentCouncil(const string& Name) {
	this->Name = Name;
}
int StudentCouncil::GetRating() {
	return rand() % 3 + 3;
}