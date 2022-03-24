#ifndef STATE_H
#define STATE_H

#include<iostream>
#include<string>
using namespace ::std;

class State
{
public:
	State();					//constructor
	State(const State&);		//copy constructor
	~State();					//destructor

	void setName(string);			//set object data
	void setAbreviation(string);
	void setCapitol(string);
	void setYear(int);
	void setPopulation(int);

	string getName() const;					//get object data
	string getAbbreviation() const;	
	string getCapitol() const;
	int getYear() const;
	int getPopulation() const;
	
	void Print();			//print all data
	

private:
	string name;
	string abbreviation;
	string capitol;
	int year;
	int population;
	

};
#endif