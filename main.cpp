#include <iostream>
#include "StudentGroup.h"
#include "Student.h"

int main()
{
	setlocale(LC_ALL, "RU");
	StudentDef* Charles = new StudentDef("Charles Sullivan");
	StudentBotan* Dorcas = new StudentBotan("Dorcas Jackson");
	StudentDef* Francis = new StudentDef("Francis Cook");
	StudentCouncil* Betty = new StudentCouncil("Betty Henderson");
	StudentDef* Letitia = new StudentDef("Letitia Jefferson");
	StudentDef* Wilfred = new StudentDef("Wilfred Morris");

	StudentGroup* g7000 = new StudentGroup("g7000");
	StudentGroup* g6666 = new StudentGroup("g6666");
	StudentGroup* g1111 = new StudentGroup("g1111");

	Francis->joinGroup(*g7000);
	Wilfred->joinGroup(*g7000);
	Charles->joinGroup(*g7000);
	Betty->joinGroup(*g7000);
	Letitia->joinGroup(*g7000);
	Dorcas->joinGroup(*g7000);
	Betty->joinGroup(*g6666);
	Dorcas->joinGroup(*g1111);

	g7000->kickStudent(Betty);

	Dorcas->joinGroup(*g7000);

	Dorcas->StudentInfo();
	Betty->StudentInfo();

	g7000->Exam();

	Letitia->StudentInfo();



	return 0;
}