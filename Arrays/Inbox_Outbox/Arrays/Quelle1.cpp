#include<iostream>
using namespace std;

void main()
{

	//Deklaration und Initialisierung!!!
	int xyz[] = { 23,345,456,34,9,45,99,0,3 }; //ohne Größenangabe wird der Speicherplatz vom Compiler abgezählt
	char abc[20] = { 'F','r','e','i','\0','a','g' };
	char name[20]; //Ohne Initaliserung

	//Testreihe
	cout << xyz[5] << endl;
	cout << abc[5] << endl;
	//O'Block Ausgabe
	cout << xyz << endl;
	cout << abc << endl;

	cout << "Name: "; cin >> name;
	cout << "Hallo " << name << " wie gehts? \n";

	//---------------------------------------------------------
	char inbox[20];
	char outbox[20];

	cout << "Wort (5): "; cin >> inbox;
	//Den Inhalt mit einer Schleife in die outbox schleifen

	int i;
	for (i = 0; i < 5; i++)
	{
		outbox[i] = inbox[i];
	}
	outbox[i] = '\0';

	//---Aufgabe ich möchte wissen wieviele gewollte Buchstaben im Array sind----ohne sizeof -> handmade ;-)
	char irgendwas[20];
	cout << "Irgendwas: "; cin >> irgendwas;
	//Allgorythmus

	for (i = 0; irgendwas[i] != '\0'; i++);


	cout << "Länge des W;

	cout << "Länge des Wortes: " << i << endl;


	system("pause");
}

