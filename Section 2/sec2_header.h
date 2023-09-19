#pragma once
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

ifstream input_file("sec2_grades.txt"); //! input file
ofstream outputFile("sec2_output.txt"); //! output file

int stud_num = 0, score_numb = 0;
string *names_arr; //! array to store student names
string **arrs, **grad_arr; //! arrays to store student scores and grades
float *eachexam_avgscore; //! array to store the average score for each exam

/**
1) Purpose:checks if a given string consists of only alphabetic characters.
2) Parameters: str(string)
3) Return type: boolean
4) Side Effect: None
*/
bool isAlphabetic(const string &str);

/**
1) Purpose:splits a given input string into substrings or subparts based on spaces.
2) Parameters: input(string)
3) Return type: string
4) Side Effect: None
*/
string* fracture(const string input);

/**
1) Purpose:parses the first line of the input file to get the number of students and the number of scores.
2) Parameters: None
3) Return type: void
4) Side Effect: None
*/
void aquire__students_scores_nos();

/**
1) Purpose:calculates the average score for each exam across all students.
2) Parameters: None
3) Return type: void
4) Side Effect: None
*/
void subwise_avg();

/**
1) Purpose:assigns grades to student scores for each exam and generates the output along with student name, score and grade for each subject.
2) Parameters: None
3) Return type: void
4) Side Effect: None
*/
void subwise_grade_showoutput();
