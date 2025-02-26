//write include statement for decisions header
#include<iostream>
#include "decisions.h"

//Write code for function(s) code here

string get_letter_grade_using_if(int grade) 
{
    string letterGrade = "Invalid"; // Create return string value
    if (grade <= 100 && grade >= 0) // We will make sure grade is in valid range 0 - 100
    {

        if (grade >= 90) // Start with A grade test and go down letters if false
        {
            letterGrade = "A";
        }
        else if (grade >= 80)
        {
            letterGrade = "B";
        }
        else if (grade >= 70)
        {
            letterGrade = "C";
        }
        else if (grade >= 60)
        {
            letterGrade = "D";
        }
        else // If all tests fail return F
        {
            letterGrade = "F";
        }
    } 
    else 
    {
        cout << "\nThis grade is invalid";
    }
    return letterGrade;
}

string get_letter_grade_using_switch(int grade)
{
    int shortGrade = grade / 10; 
    string result;
    switch (shortGrade)
    {
        case 10:
            result = "A";
            break;
        case 9:
            result = "A";
            break;
        case 8:
            result = "B";
            break;
        case 7:
            result = "C";
            break;
        case 6:
            result = "D";
            break;
        default:
            result = "F";
    }
    return result;
}