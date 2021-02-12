//Neues Thema Unterprogramme und Funktionen vom 29.01.2021

#include <iostream>
using namespace std;

//Prototyping - Die Funktionen des Programms vorstellen, da diese erst später im Programm vorkommen--------------------------------------------------
void up1();
void up2(int, int);
int up3(int, int);
int up3(int, int, int);
void upRekursiv(int);

void main()
{
	int x = 42;
	int y = 58;
									//Aufrufen der Funktionen, welche vollständig ausgeführt werden
	up1();							//Hier die Funktion ohne Übergabeparameter
	up2(x, y);						//Hier die Funktion mit Übergabeparameter, in diesem Fall wird x und y übergeben
	int dif = up3(x, y);			//Hier mit Übergabe- und Rückgabeparameter, der Wert der zurückgegeben wird, wird in der Variable dif gespeichert
	cout << "Die Differenz lautet: " << dif << endl;
	
	//Hier wird die Funktion up3 Überladen ----------------------------------------------------------------------------------------------------------

	int z = 15;
	int dif2 = up3(x, y, z);
	cout << "Die Differenz lautet: " << dif2 << endl;

	//Hier wird die Rekursive Funktion upRekursiv aufgerufen ----------------------------------------------------------------------------------------

	upRekursiv(6);
	cout << endl;

	system("pause");
}


// up1 - Kein Übergabeparameter, kein Rückgabeparameter ---------------------------------------------------------------------------------------------

void up1()
{
	cout << "Hallo Welt" << endl;
}


// up2 - Jetzt fresch mit Übergabeparameter, kein Rückgabeparameter ---------------------------------------------------------------------------------

void up2(int foo, int ba)
{
	int summe = foo + ba;

	cout << "Die Summe der Zahlen lautet: " << summe << endl;
}


// up3 - Mit Übergabeparameter, Jetzt fresch mit Rückgabeparameter ----------------------------------------------------------------------------------

int up3(int foo, int ba)
{
	int differenz = foo - ba;

	return differenz;
}


// up3 - Überladen von Funktionen, andere Funktion, aber gleicher Name ------------------------------------------------------------------------------

int up3(int foo, int ba, int bang)
{
	int differenz = foo - ba - bang;

	return differenz;
}


// upRekursiv - Wiederholtes Aufraufen von Funktionen -----------------------------------------------------------------------------------------------

void upRekursiv(int foo)
{
	if (foo > 0)					//Wenn der übergebene Wert größer null ist						
	{
		foo--;							//Wird der Wert um Eins reduziert
		upRekursiv(foo);				//Und die Funktion damit neu aufgerufen
	}
									
	cout << foo << " ";					//Dann gebe den Wert aus
}