#include "vector.h"
/*

*/

Vector::Vector(size_t sz)
	: size{ sz }, nums{new int[sz]}
{
	for(size_t i =0; i < sz ; ++i)
	{
		nums[i] = 0;
	}
}