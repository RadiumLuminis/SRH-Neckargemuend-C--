//Toms Array Aufgabe vom 18.12 zum Test

#include<iostream>
using namespace std;

void main()
{
	char inbox[20], outbox[20];

	cout << "Wort: "; cin >> inbox;

	int i;
	
	/*for (i = 0; inbox[i] != '\0'; i++)
	{

	outbox[i] = inbox[1];

	outbox[i] = '\0';

	cout << "Outbox" << oubox << endl;
	
	}
	
	*/
	
	//Aufgabe 1 E Filter --> eE rausfiltern --> Einheit wird _int_it 

	for (i = 0; inbox[i] != '\0'; i++)
		{
			
		if (inbox[i] != 'e' && inbox[i] != 'E') 
			{

				outbox[i] = inbox[i];

			}

			else {

				outbox[i] = '_';

			}


		}

	outbox[i] = '\0';

	cout << "Outbox: " << outbox << endl << endl;

	// AUfgabe 2 E-Filter --> eE rausfiltern ( ohne Leestellen) --> Einheit wird inhit

system("pause");

}
