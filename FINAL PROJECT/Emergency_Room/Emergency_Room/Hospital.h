#ifndef HOSPITAL_H_
#define HOSPITAL_H_

#include <iostream>
#include "Patient.h"
#include <queue>
#include <utility>
#include <set>

using namespace std;
class Hospital
{
private:
	priority_queue <Patient> patients;
	set <Patient> log;


};

#endif