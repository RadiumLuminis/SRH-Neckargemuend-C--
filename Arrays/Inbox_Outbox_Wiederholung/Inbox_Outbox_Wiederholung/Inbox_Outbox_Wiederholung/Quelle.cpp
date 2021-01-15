//15.01.2021 - Wiederholung zum Thema Arrays

#include <iostream>
using namespace std;

void main()
{
	std::locale::global(std::locale("German_germany"));			//Umlaute Verwenden k�nnen

	char inbox[20], outbox[41];									//Inbox und Outbox anlegen, Outbox ist doppelt so gro�

	cout << "Wort: "; cin >> inbox;								//Wort soll eingegeben werden

	//in die Outbox schleifen

	/*
	int i;
	for (i = 0; inbox[i] != '\0'; i++)
	{
		outbox[i] = inbox[i];
	}
	outbox[i] = '\0';
	*/

	//Mit Sternchen in Outbox schleifen

	int i, a = 0;												//Zwei Z�hlvariablen anlegen
	for (i = 0; inbox[i] != '\0' ; i++)							//Schleife, l�uft bis zum Wortende (Nullterminierung)
	{
		outbox[a] = '*';										//Sternchen setzen
		a++;													//Schnelle Z�hlvariable erh�hen
		outbox[a] = inbox[i];									//Buchstaben setzen
		a++;													//Schnelle Z�hlvariable erh�hen
	}
	outbox[a] = '*';											//Sternchen setzen
	outbox[a+1] = '\0';											//Nullterminierung, um alles hinter dem letzten Buchstaben nicht als Datenm�ll zu haben

	cout << outbox << endl;
	cout << "L�nge des Wortes: " << i << endl;

	system("pause");

}
