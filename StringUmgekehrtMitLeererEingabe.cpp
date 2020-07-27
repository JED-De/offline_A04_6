#include <iostream>
#include <string>
using namespace std;

int main()
{
	string eingabe, eingabeumgekehrt;
	cout << "Bitte Text eingeben (ggfs. mit Leerzeichen): ? ";
	getline(cin, eingabe);
	unsigned int laenge = eingabe.size();
	for (unsigned int i = 0; i < laenge; i++)
	{
		eingabeumgekehrt = eingabeumgekehrt + eingabe.at(laenge - 1 - i);
	}
		cout << "Eingabetext: " << eingabe << endl << "Ergebnis: " << eingabeumgekehrt << endl;
	system("PAUSE");
	return 0;
}