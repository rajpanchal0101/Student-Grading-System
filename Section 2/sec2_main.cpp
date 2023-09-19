#include "sec2_prosecution.cpp"

int main()
 {
    if (input_file.is_open() and outputFile.is_open())
    {
        string line;

        bool firstlineSkipped = false; //! skips the first line
        int tempI = 0;

        //! gets the number of students and scores from the input file
        aquire__students_scores_nos();

        names_arr = new string[stud_num];
        arrs = new string *[stud_num];
        grad_arr = new string *[stud_num];

        for (int i = 0; i < stud_num; i++)
        {
            arrs[i] = new string[score_numb];
            grad_arr[i] = new string[score_numb];
        }

        while (getline(input_file, line))
         {
            string* relics = fracture(line); //! Split the line

            string tempStr = "";
            int tempInt = 0;

            //! Extracts the student name from the line
            for (int i = 0; i < score_numb; i++)
            {
                if (isAlphabetic(relics[i]))
                {
                    tempStr = tempStr + relics[i] + " ";
                }
                else if (!isAlphabetic(relics[i]))
                {
                    tempInt = i;
                    break;
                }
            }

            names_arr[tempI] = tempStr;

            for (int i = 0; i < score_numb; i++)
            {
                arrs[tempI][i] = relics[i + tempInt];
            }
            tempI++;
            delete[] relics; //! Releases occupied memory
         }

        //! Calculate subject-wise averages
        subwise_avg();
        //! Calculate and displays student name, score and grades for each subject
        subwise_grade_showoutput();

        //! Clean up allocated memory
        for (int i = 0; i < stud_num; i++)
        {
            delete[] arrs[i];
            delete[] grad_arr[i];
        }

        delete[] arrs;
        delete[] grad_arr;
        delete[] names_arr;
    }
    input_file.close();
    outputFile.close();

    cout << "Raj, code has been successfully executed and results have been written to the output file." << endl;
    return 0;
}
