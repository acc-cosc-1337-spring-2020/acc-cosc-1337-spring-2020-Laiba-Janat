#include "decision.h"
//Write the function code that returns the product of hours and hourly_rate.

double Gross_Pay(double hours, double hourly_rate)
{
	double regular_pay;
	

	if (hours <= 40)
	{
       regular_pay = hours * hourly_rate;
	}


	else
	{
		regular_pay = 40 * hourly_rate;
		double overtime_hours = hours - 40;
		double overtime_pay = (overtime_hours * 1.5)*hourly_rate;
		regular_pay = regular_pay + overtime_pay;
	}
	
	
    return regular_pay;
}
