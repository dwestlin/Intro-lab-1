// Laboration C++.cpp : Defines the entry point for the console application.
// Laboration 1 uppgift 1
// Daniel Vestlin - dawe1103 @ portalen

#include <iostream>
#include <iomanip>

using namespace std;


int main()
{
	//deklaration av variabelnamnen. Valt int f�r m�tarst�llningarna och mil. double f�r tank och f�rbrukning s� att decimaler f�r plats.
	int from;
	int to;
	int miles;
	double fuelTank;
	double consumption;
	const double PETROL = 10;


	// Inmatning av data
	cout << "BENSINFORBRUKNING OCH KOSTNAD" << endl;
	cout << "=============================" << endl;
	cout << endl;

	cout << "Ange Matarstallning 1" << setw(11) << "[km]: ";
	cin >> from;

	cout << "Ange Matarstallning 2" << setw(11) << "[km]: ";
	cin >> to;

	cout << "Hur mycket tankade du?" << setw(10) << "[l]: ";
	cin >> fuelTank;
	cout << endl;

	//deklaration av mil samt utr�kning f�r att f� fram f�rbrukningen per mil
	miles = (to - from) / 10;
	consumption = fuelTank / miles;

	// H�r presenteras resultatet d�r det �r satt att resultatet presenteras i 2 decimaler
	cout << fixed << setprecision(2);
	cout << right;
	cout << "Bensinforbrukning" << setw(12) << "[l/mil]" << setw(3) << ": " << setw(5) << consumption << endl;
	cout << "Milkostnad" << setw(22) << "[kr/mil]: " << setw(4) << PETROL * miles << endl;


	system("pause");

	return 0;

}
