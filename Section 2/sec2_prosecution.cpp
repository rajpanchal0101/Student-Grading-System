#include "sec2_header.h"

//! checks if a given string consists of only alphabetic characters.
bool isAlphabetic(const string &str)
{
    for (char ch : str)
     {
        if (!std::isalpha(ch))
        {
            return false;
        }
     }
    return true;
}


string* fracture(const string input)
{
    istringstream ss(input);
    string relic;
    string* relics = new string[100];
    int i = 0;
    while (getline(ss, relic, ' '))
    {
        if (relic == " " or relic == "")
        {
            continue;
        }
        relics[i++] = relic;
    }
    return relics;
}

void aquire__students_scores_nos()
 {
    string line;
    getline(input_file, line);
    string* relics = fracture(line);
    stud_num = stoi(relics[0]);
    score_numb = stoi(relics[1]);
    delete[] relics;
 }

void subwise_avg()
{
    eachexam_avgscore = new float[score_numb];

    for (int i = 0; i < score_numb; i++)
     {
        int sum = 0;

        for (int j = 0; j < stud_num; j++)
        {
            sum = sum + stoi(arrs[j][i]); //! Sum of scores for a particular exam
        }
        eachexam_avgscore[i] = (float)sum / (float)stud_num;
     }
}

void subwise_grade_showoutput()
{
    int count = 1;
    for (int i = 0; i < stud_num; i++)
     {
        for (int j = 0; j < score_numb; j++)
        {
            if (stoi(arrs[i][j]) >= eachexam_avgscore[j] - 5 and stoi(arrs[i][j]) <= eachexam_avgscore[j] + 5)
            {
                grad_arr[i][j] = "C";
            }
            else if (stoi(arrs[i][j]) > eachexam_avgscore[j] + 5)
            {
                (stoi(arrs[i][j]) > eachexam_avgscore[j] + 15) ? grad_arr[i][j] = "A" : grad_arr[i][j] = "B";
            }
            else if (stoi(arrs[i][j]) < eachexam_avgscore[j] - 5)
            {
                (stoi(arrs[i][j]) < eachexam_avgscore[j] - 15) ? grad_arr[i][j] = "F" : grad_arr[i][j] = "D";
            }
        }

        string str_scograde = "";
        for (int j = 0; j < score_numb; j++)
         {
            str_scograde = str_scograde + arrs[i][j] + " " + grad_arr[i][j];

            if (j < score_numb - 1)
                str_scograde = str_scograde + ", ";
         }

        outputFile << count << ") Student Name : " << names_arr[i] <<"\n   [Score and Grade] : "<< str_scograde << endl << endl;
        count++;
     }
}
