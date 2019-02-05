/*************************************************
                CS140 Lab Week 12.4

Written by: Jackson Allyn
7 April, 2017
Prof. Hansen
CS140
*************************************************/


#include <math.h>
#include <string>
#include <vector>
#include <iomanip>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{

int w, x;
int *y, *z;

z = new int(14);
y = &x;
x = 2;
w = *z;
*y = 8;

if (x == *y)
{
    (x)++;
}
else
{
(w)++;
}
y = new int;
*y = 2;

cout << w << " " << x << " " << *y << " " << *z <<endl;


}
