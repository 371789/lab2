#include "StudentDef.h"

StudentDef::StudentDef(const string& Name) {
	this->Name = Name;

}
int StudentDef::GetRating() {
	return rand() % 5 + 1;
}