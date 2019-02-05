// Add a single new element to the array
// This function is passed a pointer to an array of integers called a
// of length len and an integer that should be added to the end of
// the array. This will require several steps:
#include "stdafx.h"
#include "myvector.h"

int* pushBack(int* a, unsigned int len, int newItem)
{
	
	// (1) allocate a new array of len+1 integers
	int *x;
	 x = new int[len + 1];
	
	// (2) copy the entire of contents of a into the new array
	 for (int i = 0; i < len; i++)
	 {

		 x[i] = a[i];

	 }

	// (3) put the newItem in the last position of the new array

	 x[len] = newItem;

	// (4) free up the space at a and

	 delete [] a;

	// (5) return a pointer to the new array

	 return x;


}
int& at(int* a, unsigned int idx)
{
//return the element in a at index idx
	return a[idx];

}
int* resize(int* a, unsigned int oldLen, unsigned int newLen)
{
	int *y; //Declaration for pointer y
	// (1) allocate the array of size newLen
	y = new int[newLen]; //Dynamically allocated array which is set to the size of newLen
	// (2) copy elements from a into the new array until one of the
	// following occurs:
	// (i) all oldLen items are copied from a (fill the rest with
	// zeroes!) or
	// (ii) the new array is completely filled with newLen elements
	if (oldLen <= newLen) //Checks to see if oldLen is less than or equal to newLen
	{
		for (int i = 0; i < newLen; i++) //for loop that runs for the length of newLen
		{
			y[i] = a[i]; //copies array a into y's dynamically allocated array
		}
		for (int i = oldLen; i < newLen; i++) //for loop that starts at oldLen and runs until newLen ends
		{
			y[i] = 0; //Everything after oldLen is set to 0
		}
	}
	else //if oldlen is not less than or equal to newLen
	{
		for (int i = 0; i < newLen; i++) //for loop that runs the length of newLen
		{
			y[i] = a[i]; //copies array a into y's dyamically allocated array
		}

	}
	// (3) free up the space at a and
	delete [] a; //Deletes array a to prevent memory leak
	// (4) return a pointer to the new array
	return y; //Returns y
}
