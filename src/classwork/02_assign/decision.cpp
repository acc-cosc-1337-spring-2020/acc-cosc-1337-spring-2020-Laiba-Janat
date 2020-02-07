#include "decision.h"
//Write the function code that returns the product of hours and hourly_rate.

double Gross_Pay(double hours, double hourly_rate)
{
	double regular_pay = hours * hourly_rate;
	double overtime = 0;
	double overtime_pay = 0;


	if (hours > 40)
	{
		double overtime = hours - 40;
		double overtime_pay = (hours * 1.5)*hourly_rate;
	}
	
	regular_pay = regular_pay + overtime_pay;
    return regular_pay;
}
