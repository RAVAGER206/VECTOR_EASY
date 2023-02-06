#include <iostream>
#include <vector>
#include "Head_file.h"


using namespace std;


void itc_rev_list(vector <int>& mass) // 6
{
if (mass.size() == 0) 
{
}
else 
{
for (int i = 0; i < mass.size() / 2; i + 1) 
{
mass[i] = mass[i] + mass[mass.size() - i - 1];
mass[mass.size() - i - 1] = mass[i] - mass[mass.size() - i - 1];
mass[i] = mass[i] - mass[mass.size() - i - 1];
}
}
} // end


void itc_rev_par_list(vector <int>& mass) // 7
{
if (mass.size() == 0) 
{
}
else 
{
for (int i = 0; i < mass.size() - mass.size() % 2; i += 2) 
{
mass[i] = mass[i] + mass[i + 1];
mass[i + 1] = mass[i] - mass[i + 1];
mass[i] = mass[i] - mass[i + 1];
}
}
} // end


void itc_rshift_list(vector <int>& mass) // 8
{
if (mass.size() == 0) 
{
}
else 
{
int a = mass[mass.size() - 1];
for (int i = mass.size() - 1; i > 0; i--) 
{
mass[i] = mass[i - 1];
}
mass[0] = a;
}
} // end
