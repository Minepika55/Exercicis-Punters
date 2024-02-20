#include <iostream>
#include <string>
using namespace std;


int main()
{
	int* Punter1 = NULL;
	cout << Punter1;

	Punter1 = new int;
	int opcio = 0;

	cout << "Vols esborrar el Punter " << Punter1 << " ?" << endl;
	cin >> opcio;

	if (opcio == 1)
	{
		delete Punter1;
		cout << Punter1;
	}

	string Fruites[3] = { "Mandarina", "Maduixa", "Platan" };

	//cout << "Vols esborrar l'Array " << Fruites << " ?" << endl;
	//cin >> opcio;

	//if (opcio == 1)
	//{
	//	delete Fruites;
	//	cout << Fruites;
	//}

	cout << "Com de gran ha de ser l'array?"<< endl;

	int llargaria;

	cin >> llargaria;

	int* arr = new int[llargaria];

	for (int i = 0; i < llargaria; i++) {
		arr[i] = (i + 1) * 10;
	}

	for (int i = 0; i < llargaria; i++) {
		cout << arr[i] << " " << endl;
	}

	cout << "Aixi queda l'array: " << llargaria << " ?" << endl;

	cout << "Vols esborrar l'Array " << llargaria << " ?" << endl;
	cin >> opcio;

	if (opcio == 1)
	{
		delete[] arr;
		cout << llargaria;
	}

	return 0;
}