/*
Title: Chapter 5 exercise 20: Random number guessing game
File name: Chapter5ex20.cpp
Programmer: Patrick Maloon
Date: 11/9

Requirements:
Write a program that generates a random number and asks the user to guess what the number is.
If the user’s guess is higher than the random number, the program should display “Too high, try again.”
If the user’s guess is lower than the random number, the program should display “Too low, try again.”
The program should use a loop that repeats until the user correctly guesses the random number.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int main()
{
    const int MIN_VALUE = 1,
        MAX_VALUE = 10;

    int random_num,
        user_num;

    unsigned seed = time(0);

    srand(seed);

    random_num = (rand() %
        (MAX_VALUE - MIN_VALUE + 1)) +
        MIN_VALUE;

    cout << "Guess a number between 1 and 10: ";
    cin >> user_num;

    while (user_num != random_num)
    {
        cout << "Your number is "
            << (user_num < random_num ?
                "lower." : "higher.");

        cout << "Try again: ";

        cin >> user_num;
    }

    cout << "\nCorrect! " << endl;
    cout << "Random number = " << random_num << endl;
    cout << "Your guess    = " << user_num << endl;
    cout << endl;

    return 0;
}