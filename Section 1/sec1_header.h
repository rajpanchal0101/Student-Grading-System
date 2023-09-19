#pragma once
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <iomanip>
#include <string>

using namespace std;

/**
1) Purpose:calculates the average exam score
2) Parameters: scores(vector<int>)
3) Return type: double
4) Side Effect: None
*/
double cal_Avg(const vector<int>& scores);

/**
1) Purpose:determines the letter grade based on the percentage
2) Parameters: percen(double)
3) Return type: string
4) Side Effect: None
*/
string discoverlett_Grade(double percen);
