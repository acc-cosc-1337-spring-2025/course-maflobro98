//add include statements
#include "repetition.h";
#include <iostream>
//add function(s) code here

int factorial(int num)
{
    int answer = num; //IMPORTANT: answer is set to input num to start our loop.

    while (num > 0) // Make sure num is positive
    {
        num = num - 1; // Get preceding value in factorial
        if (num > 0) // Only executes if num is positive
        {
            answer = answer * num;
        }
    }
    return answer;
}


int gcd(int numA, int numB)
{
    while(numA != numB) // Run loop until numA and numB are the same
    {
        int hold;
        if(numA < numB) // Check if numA is less than numB
        {
            hold = numA; // 
            numA = numB; // We switch numA and numB
            numB = hold; //
        }
        if(numA > numB) // Check if numA is more than numB
        {
            numA = numA - numB;
        }
    }
    return numA;
}