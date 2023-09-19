#include "sec1_header.h"

double cal_Avg(const vector<int>& scores)
{
    int sum = 0;
    for (int score : scores)
    {
        sum += score;
    }
    return static_cast<double>(sum) / scores.size();
}


string discoverlett_Grade(double percen)
 {
    if (percen >= 95.0) return "A";
    else if (percen >= 91.67) return "A-";
    else if (percen >= 88.3) return "B+";
    else if (percen >= 85.0) return "B";
    else if (percen >= 81.67) return "B-";
    else if (percen >= 78.33) return "C+";
    else if (percen >= 75.0) return "C";
    else if (percen >= 71.67) return "C-";
    else if (percen >= 68.33) return "D+";
    else if (percen >= 65.0) return "D";
    else if (percen >= 61.67) return "D-";
    else return "F";
}
