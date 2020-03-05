#include "vectors.h"
#include <vector>


/*
Write a value return function get_max_from_vector with a const reference 
vector of intsparameter that returns the max value in a vector

@param numbers is a const reference to a vector of integers
@return the max value in the vector
*/

int get_max_from_vector(const std::vector<int>& numbers)
{
	int max = 0;

	for (int i = 0; i < numbers.size(); i++) {

		if (i == 0) 
		{
			max == numbers[0];
		}
		else 
		{
			if (numbers[i]> max)
			{
				max = numbers[i];
			}
		}

	}
	return max;
}



/*
Write a function named is_prime with an integer parameter that
given a number returns true if prime or false if not prime

@param number: Any whole number
@return: bool if prime False if not
*/

bool is_prime(int num)
{
	if (num == 1 || num == 2) 
	{
		return true;
	}

	int j = 2;
	
	bool n{ true };
	while( j < num)
	{
		if (num%j == 0)
		{
			n = false;
			return n;
		}
		j++;
	}
	return n;
}


/*
Write a a function named vector_of_primes with an integer parameter
that given a number returns all the prime numbers up to the number

Example given number 10 returns a vector with elements 2,3,5,7,

@param int integer value
@return vector of ints containing prime values up to a value

Make sure to use the is_prime function to determine if current 
number is prime.
*/


std::vector<int>vector_of_primes(int num)
{
	bool p;

	std::vector<int>primes;
	
	for (int i = 2 ; i <= num; i++) 
	{
		p = is_prime(i);
		if (p == true)
		{
			primes.push_back(i);
		}
		
	
	
	}

	
	return primes;
}
