//Neues Thema Unterprogramme und Funktionen vom 29.01.2021

#include <iostream>
using namespace std;

//Prototyping - Die Funktionen des Programms vorstellen, da diese erst sp�ter im Programm vorkommen
void up1();

void main()
{
	int x = 42;
	int y = 53;

	up1();							//Aufrufen der Funktion, welche vollst�ndig ausgef�hrt wird

	system("pause");
}

void up1()
{
	cout << "Hallo Welt" << endl;
}