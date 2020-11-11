/**
 *Rohan Parikh
 *10 November 2020 -
 *Unit 3 Conditionals Worksheets
 *Extra Thing for IF worksheet:
 */

#include <iomanip>
#include <iostream>
#include <string>
//namespaces can sometimes cause problems make sure you are able to use it
using namespace std;
void ifWorksheets()
{
    // Question 1
    cout << "Enter a number\n";
    int userNumber = 0;
    cin >> userNumber;
    if (userNumber == 57)
    {
       cout << "That's a heinz number!\n"; 
    }
    else
    {
        cout << "That is a plain, old number.\n";
    }

    // Question 2
    cout << "Input a nunmber between 5 and 10\n";
    int number;
    cin >> number;
    if (number > 10 )
    {
        cout << "Too big!\n";
    }
    else if (number < 5 )
    {
        cout << "Too small!\n";
    }
    else if (number == 7)
    {
        cout << "Lucky Number!\n";
    }
    else
    {
        cout << "Yep, a plain old number between 5 and 10\n";
    }
}

void ifElseWorksheets()
{
    // Question 1
    cout << "Enter your name:\n";
    string name;
    cin >> name;
    cout << "Enter your age:\n";
    int age;
    cin >> age;
    // If over 16
    if (age >= 16)
    {
        cout << "It's scary, " << name << ", you are old enough to drive!\n";
    }
    else
    {
        cout << "You still have " << 16 - age << " years left before you can drive.\n";
    }

    // Question 2
}

int main ()
{
    // Method for worksheet called if worksheets
    ifWorksheets();

    ifElseWorksheets();
}
