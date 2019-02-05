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
    int a, *b, c, *d;
    a= 3;
    b = &a;
    *b += 1;
    d = new int(-1);
    c = *d;
    a -= c;
    b = d;
    (*b)++;
    d= new int;
    *d = c;
    a = 3 + *b;

    cout << a << " " << *b << " " << c << " " << *d << endl;
}

