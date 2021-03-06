///////////////////////////////////////////////////////////////////////
//                                                                     
// Filename: 
// Date: 
// Programmer: David Edward Bass             
//
// Description:
//    
//    
//           
//
//
///////////////////////////////////////////////////////////////////////

// Preprocessor Directives
#include<iostream>
#include<iomanip>
#include<cmath>
#include<cstdlib>
#include<ctime>
#include<algorithm>
#include "Dice.h"
using namespace std;

int main()
{
	Dice attack{ 3, 6, 0 };

	int attackBonus = 3;

	int defenseValue = 12;

	bool hit = false;

	auto attackResult = attack.getTotal();

	if ((attackResult + attackBonus) > defenseValue)
	{
		hit = true;
		auto numberOfCrits = attack.getCrit();
		cout << "Success ";
		cout << "# of Crits: " << numberOfCrits << endl;
	}

	else
	{
		hit = false;
		cout << "Failure" << endl;
	}
}