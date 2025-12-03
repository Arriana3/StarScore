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

double IsLower(double score, double lowestscore)
{
    if (score < lowestscore)
    {
        lowestscore=score;
    }
    else if (lowestscore == 0)
    {
       lowestscore=score; 
    }
        
}

double IsHigher(double score, double highestscore)
{
    if (score > highestscore)
    {
        highestscore=score;
    }
    else if (highestscore == 0)
    {
        highestscore=score;
    }
}

double calcFinalScore(double total, double highestscore, double lowestscore)
{
  finalscore=total-highestscore-lowestscore
}

int main()
{
	double score,total, finalscore, 
	double lowestscore=0; 
	double highestscore=0;

    for(int i = 1; i <= 5; i++)
    {
      getScore()
		isLower(score,lowestscore)
		isHigher(score,highestscore)
     total+=score      
	}

calcFinalScore(total,highestscore,lowestscore)

    cout << fixed << setprecision(1);
    cout << "Final score (highest and lowest dropped): " << finalScore << endl;

    return 0;
}
