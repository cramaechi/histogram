//Program reads in an arbitrary amount of grades (0 - 5) from a class of
//students and documents the number of times a certain grade was made.
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <iomanip>
using namespace std;

void input(int gradeValues[], int arraySize);
//Precondition: arraySize == 6.
//Postcondition: The array gradeValuesh has been filled;

void documentQuizScore(int gradeValues[], int arraySize, int grade);
//Precondition: All elements of the array gradeValues has been initialized to
//zero. arraySize >= 1.
//Postcondition: Increments a certain element of gradeValues that contains
//a value equal to grade.

void displayQuizGradeHistogram(int gradeValues[], int arraySize);
//Postcondition: Displays the text-based histogram of quiz scores for a class 
//of students.

const int GRADE_SCALE = 6;

int main()
{
    int gradeValues[GRADE_SCALE] = {0, 0, 0, 0, 0, 0};

    input(gradeValues, GRADE_SCALE);
    displayQuizGradeHistogram(gradeValues, GRADE_SCALE);

    return 0;
}

void input(int gradeValues[], int arraySize)
{
    int grade;

    cout<<"Start entering grades: ";

    do
    {
        cin>>grade;
        documentQuizScore(gradeValues, arraySize, grade);
    }while(cin.peek() != '\n');

    cout<<endl;
}

void documentQuizScore(int gradeValues[], int arraySize, int grade)
{
    for (int i = 0; i < arraySize; i++)
    {
        if (grade == i)
            ++gradeValues[i];
    }
}

void displayQuizGradeHistogram(int gradeValues[], int arraySize)
{
    for (int i = 0; i < arraySize; i++)
        cout<<gradeValues[i]<<" grade(s) of "<<i<<endl;
    cout<<endl;
}
