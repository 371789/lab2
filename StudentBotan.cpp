#include "StudentBotan.h"

StudentBotan::StudentBotan(const string& Name) {
	this->Name = Name;

}
int StudentBotan::GetRating() {
	return rand() % 2 + 4;
}
