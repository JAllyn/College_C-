/*************************************************
                CS140 Lab Week 12.2

Written by: Jackson Allyn
6 April, 2017
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

int* integerArray(unsigned int &a);

int main()
{
/*************************************************
                Assignment 1
*************************************************/
/*************************************************
int *a, *b;
int c = 100;
a = new int ();
b = new int [16];

a = &c;

for (int i = 0; i < 15; i++)
    {
    b[i] = pow(2, i);
    cout <<b[i] <<endl;
    }
*************************************************/
/*************************************************
                Assignment 2
*************************************************/
   unsigned int k;
    int *c;

    cin >> k;
    c = integerArray(k);

    for(int i = 0; i < k; i++)
    {
        c[i] = pow(2,i);
        cout << c[i] << endl;
    }



}
int* integerArray(unsigned int &a)
{

   int *b;


    if( a == 0)
    {
        return NULL;
    }
    else
    {
       b = new int [a];
       return b;
    }

}
