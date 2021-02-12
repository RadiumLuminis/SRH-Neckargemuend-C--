//Neues Thema Unterprogramme und Funktionen vom 29.01.2021

#include <iostream>
using namespace std;

//Prototyping - Die Funktionen des Programms vorstellen, da diese erst sp�ter im Programm vorkommen--------------------------------------------------
void up1();
void up2(int, int);
int up3(int, int);
int up3(int, int, int);
void upRekursiv(int);

void main()
{
	int x = 42;
	int y = 58;
									//Aufrufen der Funktionen, welche vollst�ndig ausgef�hrt werden
	up1();							//Hier die Funktion ohne �bergabeparameter
	up2(x, y);						//Hier die Funktion mit �bergabeparameter, in diesem Fall wird x und y �bergeben
	int dif = up3(x, y);			//Hier mit �bergabe- und R�ckgabeparameter, der Wert der zur�ckgegeben wird, wird in der Variable dif gespeichert
	cout << "Die Differenz lautet: " << dif << endl;
	
	//Hier wird die Funktion up3 �berladen ----------------------------------------------------------------------------------------------------------

	int z = 15;
	int dif2 = up3(x, y, z);
	cout << "Die Differenz lautet: " << dif2 << endl;

	//Hier wird die Rekursive Funktion upRekursiv aufgerufen ----------------------------------------------------------------------------------------

	upRekursiv(6);
	cout << endl;

	system("pause");
}


// up1 - Kein �bergabeparameter, kein R�ckgabeparameter ---------------------------------------------------------------------------------------------

void up1()
{
	cout << "Hallo Welt" << endl;
}


// up2 - Jetzt fresch mit �bergabeparameter, kein R�ckgabeparameter ---------------------------------------------------------------------------------

void up2(int foo, int ba)
{
	int summe = foo + ba;

	cout << "Die Summe der Zahlen lautet: " << summe << endl;
}


// up3 - Mit �bergabeparameter, Jetzt fresch mit R�ckgabeparameter ----------------------------------------------------------------------------------

int up3(int foo, int ba)
{
	int differenz = foo - ba;

	return differenz;
}


// up3 - �berladen von Funktionen, andere Funktion, aber gleicher Name ------------------------------------------------------------------------------

int up3(int foo, int ba, int bang)
{
	int differenz = foo - ba - bang;

	return differenz;
}


// upRekursiv - Wiederholtes Aufraufen von Funktionen -----------------------------------------------------------------------------------------------

void upRekursiv(int foo)
{
	if (foo > 0)					//Wenn der �bergebene Wert gr��er null ist						
	{
		foo--;							//Wird der Wert um Eins reduziert
		upRekursiv(foo);				//Und die Funktion damit neu aufgerufen
	}
									
	cout << foo << " ";					//Dann gebe den Wert aus
}