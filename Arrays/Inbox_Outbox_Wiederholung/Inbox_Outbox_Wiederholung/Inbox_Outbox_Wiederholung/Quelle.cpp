//15.01.2021 - Wiederholung zum Thema Arrays

#include <iostream>
using namespace std;

void main()
{
	std::locale::global(std::locale("German_germany"));			//Umlaute Verwenden können

	char inbox[20], outbox[41];									//Inbox und Outbox anlegen, Outbox ist doppelt so groß

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

	int i, a = 0;												//Zwei Zählvariablen anlegen
	for (i = 0; inbox[i] != '\0' ; i++)							//Schleife, läuft bis zum Wortende (Nullterminierung)
	{
		outbox[a] = '*';										//Sternchen setzen
		a++;													//Schnelle Zählvariable erhöhen
		outbox[a] = inbox[i];									//Buchstaben setzen
		a++;													//Schnelle Zählvariable erhöhen
	}
	outbox[a] = '*';											//Sternchen setzen
	outbox[a+1] = '\0';											//Nullterminierung, um alles hinter dem letzten Buchstaben nicht als Datenmüll zu haben

	cout << outbox << endl;
	cout << "Länge des Wortes: " << i << endl;

	system("pause");

}
