#include <iostream>
#include <string>
using namespace std;


int main()
{
	int* punter1 = NULL;
	punter1 = new int;
	int opcio = 0;

	cout << "Vols esborrar el valor " << punter1 << " ?" << endl;
	cin >> opcio;

	if (opcio == 1)
	{
		delete punter1;
	}

}
