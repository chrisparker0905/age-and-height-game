// Guess my age and height game.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


// goals
// limit number of guesses
// ask for what age should the goal be set to 20 then have code run against that, make againt variables
// your guess was to high or your guess was to low


#include <iostream>
using namespace std;
int main()
{

    cout << "Hello world, my name is Chris Parker" << endl;
    cout << "I am learning programming language for c++" << endl;
    cout << "Please enjoy my first game guess my age and guess my height" << endl;

    int age = 0; 
    int target_age = 34;
    int height = 0;
    int target_height = 67;

    while (age != target_age)
    {

        cout << "Please guess my age?" << endl;
        cin >> age;


        if (age == target_age)
        {
            cout << "Congrats you have entered the correct age" << endl;
        }
        else
        {
            if (age < target_age)
            {
                cout << "you are not correct your guess is too low, please guess again" << endl;
            }
            else if (age > target_age)
            {
                cout << "you are not correct your guess is too high, please guess again" << endl;
            }

        }

    }

    while (height != target_height)
    {

        cout << "Please guess my height, in inches?" << endl;
        cin >> height;


        if (height == target_height)
        {
            cout << "Congrats you have entered the correct height" << endl;

        }
        else
        {
            if (height < target_height)
            {
                cout << "you are not correct your guess is too low, please guess again" << endl;
            }
            else if (height > target_height)
            {
                cout << "you are not correct your guess is too high, please guess again" << endl;
            }

        }

    }

    cout << "Program end" << endl;

   
    return 0;
}

