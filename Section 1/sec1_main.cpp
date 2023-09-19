#include "sec1_prosecution.cpp"

int main()
{
    ifstream inputFile("sec1_grades.txt");  //! input file
    ofstream outputFile("sec1_output.txt");  //! output file

    if (!inputFile.is_open() || !outputFile.is_open())
    {
        cerr << "Error: Unable to open files." << endl;
        return 1;
    }

    int j=1;
    string line;
    while (getline(inputFile, line))
    {
        istringstream rrr(line);
        string stud_name;
        int numScores;
        vector<int> examScores;

        //! Reads student name
        getline(rrr, stud_name, ' ');

        //! code below handles scenarios where student name contains more than one word
        string word;
        while (rrr >> word)
        {
            if (isdigit(word[0]))
            {
                //! Read the number of exam scores
                numScores = stoi(word);
                break;
            }
            stud_name += " " + word;
        }

        //! Read exam scores
        for (int i = 0; i < numScores; ++i)
        {
            int score;
            rrr >> score;
            examScores.push_back(score);
        }

        //! Calculates the average exam score
        double averageScore = cal_Avg(examScores);

        //! Determine the letter grade based on the average score
        string lett_grade = discoverlett_Grade(averageScore);

        //! Output to console
        cout <<j<<")"<< " Student Name       : " << stud_name;
        cout << fixed << setprecision(2);
        if(j<10)
        {
        cout << "\n   Average Exam Score : " << averageScore << endl;
        cout << "   Letter Grade       : " << lett_grade << "\n" << endl;
        }
        else if(j<100)
        {
        cout << "\n    Average Exam Score : " << averageScore << endl;
        cout << "    Letter Grade       : " << lett_grade << "\n" << endl;
        }
        else if(j<1000)
        {
        cout << "\n    Average Exam Score : " << averageScore << endl;
        cout << "    Letter Grade       : " << lett_grade << "\n" << endl;
        }

        //! Output to the file
        outputFile <<j<<")"<< " Student Name                 : " << stud_name << endl;
        outputFile << "    Number of Exam Scores : " << numScores << endl;
        outputFile << "    Exam Scores                   : ";
        for (int score : examScores)
        {
            outputFile << score << " ";
        }
        outputFile << fixed << setprecision(2);
        outputFile << "\n    Average Exam Score       : " << averageScore << endl;
        outputFile << "    Letter Grade                   : " << lett_grade << "\n" << endl;
        j=j+1;
    }

    inputFile.close();
    outputFile.close();

    cout << "Raj, code has been successfully executed and results have been written to the output file." << endl;
    return 0;
}
