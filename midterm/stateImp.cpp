#include "state.h"
#include <iomanip>

State::State()
{
	name = "";
	abbreviation = "";
	capitol="";
	year = 0;
	population = 0;
}
State::State(const State& cpState)
{
	name = cpState.getName();
	abbreviation = cpState.getAbbreviation();
	capitol = cpState.getCapitol();
	year = cpState.getYear();
	population = cpState.getPopulation();
}
State::~State()
{

}
void State::setName(string nm)
{
	name = nm;
}
void State::setAbreviation(string abv)
{
	abbreviation = abv;
}
void State::setCapitol(string cap)
{
	capitol = cap;
}
void State::setYear(int y)
{
	year = y;
}
void State::setPopulation(int pop)
{
	population = pop;
}
string State::getName() const
{
	return name;
}
string State::getAbbreviation() const
{
	return abbreviation;
}
string State::getCapitol() const
{
	return capitol;
}
int State::getYear() const
{
	return year;
}
int State::getPopulation() const
{
	return population;
}
void State::Print()
{
	cout  << "Name: " << left << setw(20) << getName()
		 << "Abbreviation: " << left << setw(20) << getAbbreviation()
		 << "Capitol: " <<left<< setw(20) << getCapitol()
		<< "Year: " << left << setw(20) << getYear()
		<< "Populaion: " << left << setw(20) << getPopulation() << endl;
		
}