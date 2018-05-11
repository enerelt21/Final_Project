#ifndef PATIENT_H_
#define PATIENT_H_

#include <iostream>
#include <string>

using namespace std;

struct Patient 
{
	Patient(string n, int i)
	{
		name = n;
		ill = i;
	}
	string name;
	int ill;
};

#endif