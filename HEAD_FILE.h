#ifndef HEAD_FILE_H_INCLUDED
#define HEAD_FILE_H_INCLUDED

#include <iostream>
#include <vector>
#include "easy_list.h"


using namespace std;


void itc_even_index_list (const vector <int>& mass, vector <int>& mass2); // 1

void itc_even_parts_list (const vector <int>& mass, vector <int>& mass2); // 2

int itc_positive_list (const vector <int>& mass); // 3

int itc_sl_list (const vector <int>& mass); // 4

bool itc_same_parts_list (const vector <int>& mass); // 5

void itc_rev_list (vector <int>& mass); // 6

void itc_rev_par_list (vector <int>& mass); // 7

void itc_rshift_list (vector <int>& mass); // 8


#endif // end