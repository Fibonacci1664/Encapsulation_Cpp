/*
 * Main.cpp
 *
 *  Created on: 13 Jul 2019
 *      Author: Dave
 */

#include<iostream>

using namespace std;

class Frog
{
//Fields/Attributes/Class variables
private:
	string name;

//Private functions
private:
	string getName() {return name;}

//Public functions
public:
	Frog(string name): name(name){}

	void info() {cout << "My name is: " << getName() << endl;}
};


int main()
{
	Frog frog("Bob");

	frog.info();

	return 0;
}


