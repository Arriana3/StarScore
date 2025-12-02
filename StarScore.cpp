// StarScore.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
using namespace std;
void getScore(double& score)
{
    while (true)
    {
        cout << "Enter score (0 - 10): ";
        if (cin >> score)
        {
            if (score >= 0.0 && score <= 10.0)
                break;
            cout << "Score must be between 0 and 10." << endl;
        }
        else
        {
            cout << "Invalid input. Please enter a numeric score." << endl;
            cin.clear();
        }

    }
}

double IsLower(double a, double b)
{
    if (a < b)
    {
        return a;
    }
    else
    {
        return b;
    }
        
}

double IsHigher(double a, double b)
{
    if (a > b)
    {
        return a;
    }
    else 
    {
        return b;
    }
}

double calcFinalScore(double s1, double s2, double s3, double s4, double s5)
{
    
}

int main()
{
    double score1, score2, score3, score4, score5;
    getScore(score1);
    getScore(score2);
    getScore(score3);
    getScore(score4);
    getScore(score5);

    double min = score1;
    double max = score1;
    for (int m = 1; m < 5; m++)
    {
        
    }

    double finalScore = calcFinalScore(score1, score2, score3, score4, score5);

    cout << fixed << setprecision(1);
    cout << "Final score (highest and lowest dropped): " << finalScore << endl;

    return 0;
}
