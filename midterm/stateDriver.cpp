#include <iostream>
#include "state.h"

using namespace::std;


const int STORAGE_SIZE = 6;
State storage[STORAGE_SIZE];

void main()

{
	string name, abbreviation, capitol;
	int population, year;
	/*
	State Kansas;
	Kansas.setName("Kansas");
	Kansas.setAbreviation("KS");
	Kansas.setCapitol("Topeka");
	Kansas.setPopulation(2957861);
	Kansas.setYear(1861);
	State test(Kansas);

	cout << test.getAbbreviation() << endl;
	cout << test.getCapitol() << endl;
	cout << test.getName() << endl;
	cout << test.getPopulation() << endl;
	cout << test.getYear() << endl;

	KS
	Topeka
	Kansas
	2957861
	1861
	*/

	for (int i = 0; i < STORAGE_SIZE; i++)
	{	
		
		cout << "Enter state name: " << endl;
		getline(cin, name);
		storage[i].setName(name);

		cout << "Enter state Abbreviation: " << endl;
		getline(cin, abbreviation);
		storage[i].setAbreviation(abbreviation);

		cout << "Enter state Capitol: " << endl;
		getline(cin, capitol);
		storage[i].setCapitol(capitol);
		
		cout << "Enter year state entered union: " << endl;
		cin >> year;
		storage[i].setYear(year);

		cout << "Enter state population(2010): " << endl;
		cin >> population;
		storage[i].setPopulation(population);
		cin.get();					//solves issue with cin and getline() interfering with one another
		
	}

	for (int i = 0; i < STORAGE_SIZE; i++)
	{
		storage[i].Print();
	}
}
/*
Enter state name:
Kansas
Enter state Abbreviation:
KS
Enter state Capitol:
Topeka
Enter year state entered union:
1861
Enter state population(2010):
2893957
Enter state name:
South Dakota
Enter state Abbreviation:
SD
Enter state Capitol:
Pierre
Enter year state entered union:
1889
Enter state population(2010):
844877
Enter state name:
Idaho
Enter state Abbreviation:
ID
Enter state Capitol:
Boise
Enter year state entered union:
1890
Enter state population(2010):
1612136
Enter state name:
Maine
Enter state Abbreviation:
ME
Enter state Capitol:
Augusta
Enter year state entered union:
1820
Enter state population(2010):
1328302
Enter state name:
Georgia
Enter state Abbreviation:
GA
Enter state Capitol:
Atlanta
Enter year state entered union:
1788
Enter state population(2010):
9992167
Enter state name:
Florida
Enter state Abbreviation:
FL
Enter state Capitol:
Tallahassee
Enter year state entered union:
1845
Enter state population(2010):
19552860
Name: Kansas              Abbreviation: KS                  Capitol: Topeka              Year: 1861                Populaion: 2893957
Name: South Dakota        Abbreviation: SD                  Capitol: Pierre              Year: 1889                Populaion: 844877
Name: Idaho               Abbreviation: ID                  Capitol: Boise               Year: 1890                Populaion: 1612136
Name: Maine               Abbreviation: ME                  Capitol: Augusta             Year: 1820                Populaion: 1328302
Name: Georgia             Abbreviation: GA                  Capitol: Atlanta             Year: 1788                Populaion: 9992167
Name: Florida             Abbreviation: FL                  Capitol: Tallahassee         Year: 1845                Populaion: 19552860
*/