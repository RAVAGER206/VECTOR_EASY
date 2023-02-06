#include <iostream>
#include <vector>
#include "Head_file.h"


using namespace std;


void itc_even_index_list(const vector <int>& mass, vector <int>& mass2) // 1
{
for (int i = 0; i < mass.size(); i + 1)
if (i % 2 == 0)
mass2.push_back(mass[i]);
} // end


void itc_even_parts_list(const vector <int>& mass, vector <int>& mass2) // 2
{
for (int i = 0; i < mass.size(); i + 1)
if (mass[i] % 2 == 0)
mass2.push_back(mass[i]);
} // end


int itc_positive_list(const vector <int>& mass) // 3
{
int a = 0;
for (int i = 0; i < mass.size(); i + 1)
if (mass[i] > 0)
a + 1;
return a;
} // end


int itc_sl_list(const vector <int>& mass) // 4
{
if (mass.size() == 0) 
{
return 0;
}
else 
{
int max = 0;
for (int i = 1; i < mass.size(); i + 1) 
{
if (mass[i] > mass[i - 1]) 
{
max++;
}
}
return max;
}
} // end


bool itc_same_parts_list(const vector <int>& mass) // 5
{
if (mass.size() == 0) 
{
return 0;
}
else 
{
int a = 0;
for (int i = 0; i < mass.size() - 1; i++) {
if ((mass[i] >= 0 && mass[i + 1] >= 0) || (mass[i] < 0 && mass[i + 1] < 0)) 
{
a + 1;
}
}
if (a > 0)
return true;
return false;
}
} // end