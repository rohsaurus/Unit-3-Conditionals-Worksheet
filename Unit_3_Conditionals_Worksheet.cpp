/**
 *Rohan Parikh
 *10 November 2020 - 
 *Unit 3 Conditionals Worksheets
 *Extra Thing for IF worksheet: For question 2, added be careful message for if user picks 9
 *Extra Thing for If Else Worksheets: For question 4, gives user choice if they want to reuse their age or pick a new one
 * Extra Thing for Logical Operators: For Question 1, user is asked if their dogs and cats get along and then appropriate statement is printed
 * Also, added another statement in Question 1 of what if user picks 0 dogs and 0 cats
 * Extra Thing for More if else statements: Question 1 continues running until user guesses correct password
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
    else if (number == 9)
    {
        cout << "Be careful not to get eaten by 7!\n";
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
    cout << "Enter a positive integer\n";
    int integer;
    cin >> integer;
    int remander = integer % 2;
    if (remander == 0 )
    {
        cout << "Your number is even!\n";
    }
    else
    {
        cout << "Your number is odd\n";
    }

    // Question 3
     cout << "How many words do you want to send in your telegram message.\n";
    int words;
    cin >> words;
    if (words <= 15)
    {
        cout << "The cost to use the telegram is $8.50.\n";
    }
    else
    {
        double additionalWords = words - 15;
        double additionalCost = additionalWords * .25;
        double totalcost = additionalCost + 8.50;
        setprecision(2);
        cout << "Your total cost for the telegram is $" << totalcost << fixed << ".\n";
    }

    // Question 4
    cout << "Would you like to enter a new age, or use the one you already entered? Enter new or old. New is for choosing a new age and old if sticking with the one provided earlier\n";
    string choice;
    cin >> choice;
    int birthYear;
    cout << "Enter the current year\n";
    int currentYear;
    cin >> currentYear;
    if (choice == "new")
    {
        cout << "Enter your birthyear\n";
        cin >> birthYear;
    }
    else
    {
     birthYear = currentYear - age;
    }
    if (birthYear < 1970)
    {
        cout << "You qualify for the Juke Box Rally.\n";
    }
    cout << "Enter your favorite fruit\n";
    string fruit;
    cin >> fruit;

    if (fruit == "Strawberry")
    {
        cout << "Strawberry Fields Forever!\n";
    }
    else
    {
        cout << "Bye,bye Miss American Pie\n";
    }

    // Question 5

    cout << "Enter two positive integers\n";
    int numberOne;
    int numberTwo;
    cin >> numberOne >> numberTwo;
    if (numberOne == numberTwo)
    {
        cout << "Both your numbers are the same!\n";
    }
    else if (numberOne > numberTwo)
    {
        cout << numberTwo << " " << numberOne << endl;
    }
    else if (numberOne < numberTwo)
    {
        cout << numberOne << " " << numberTwo << endl;
    }

    // Question 6

    cout << "Your age is " << age << " correct?\n";
    string input;
    cin >> input;
    if (input == "no")
    {
        cout << "Enter your age\n";
        cin >> age;
    }
    
    
    
    
    if (age <= 5)
    {
        string underFive = "0.00";
        cout << "Your entry fee is $" << underFive << "\n";
    }
    if (age >= 65)
    {
        string seniors = "1.50";  
        cout << "Your entry fee is $" << seniors << "\n";
    }
    if (age > 5 && age < 65)
    {
        string allOthers = "2.50"; 
        
        cout << "Your entry fee is $" << allOthers << "\n";  
    }
}

void workingWithLogicalOperaters()
{
    // Question 1
    cout << "How many dogs do you have?\n";
    int dogs;
    cin >> dogs;
    cout << "How many cats do you have?\n";
    int cats;
    cin >> cats;
    if (dogs > 0 && cats > 0)
    {
        cout << "Do your cats and dogs get along? Answer yes or no.\n";
        // Extra thing: Asking the user if their pets get along and printing an appropriate statement
        string gettingAlong;
        cin >> gettingAlong;
        // If user enters yes for getting along
       if (gettingAlong == "yes")
       {
          cout << "That's amazing! How did you get them to stop fighting?\n"; 
       }
        // if user enters no for getting along
        else
        {
            cout << "Their constant fighting must cause you a lot of pain.\n";
        }
    }
    else if (dogs > 0 && cats == 0)
    {
        cout << "Guess you're a dog person\n";
    }
    else if (dogs == 0 && cats > 0)
    {
        cout << "Guess you are a cat person.\n";
    }
    else if (dogs == 0 && cats == 0) {
        cout << "No pets? I guess you must not like them.\n";
    }


    // Question 2
    while (true) {
    cout << "Enter an integer between 50 and 100\n";
    int integer;
    cin >> integer;
    
    if (integer >= 50 && integer <= 100)
    {
        cout << "You have won $" << integer << " for inputting a number in the correct range!\n";
        break;
    }
        
    else
        {
            cout << "Sorry, not following directions will cost you dearly :-( \n";
        }
    }
    
}

void moreIfElseWorksheet()
{
    // Question 1

    string password = "password";
    // While true loop to keep on repeating until user gets the right password
    while (true)
    {
        cout << "Please enter the password: \n";
        string passwordGuess;
        cin >> passwordGuess;
        if (passwordGuess == password)
        {
            cout << "You got it!\n";
            break;
        }
        
        else
        {
        cout << "That's incorrect.\n";    
        }
    }

    // Question 2

    cout << "Enter two movie names\n";
    string movieOne;
    string movieTwo;
    cin.ignore();
    getline(cin,movieOne);
    getline(cin,movieTwo);
    int lengthOne = movieOne.length();
    int lengthTwo = movieTwo.length();
    // Determining which movie is longer

    if (lengthOne > lengthTwo)
    {
        cout << "The length of the movie title, " << movieOne << " is longer that the length of the movie title " << movieTwo << endl;
    }
    else if (lengthTwo > lengthOne)
    {
        cout << "The length of the movie title, " <<  movieTwo<< " is longer that the length of the movie title " << movieOne << endl;
    }
    else if (lengthOne == lengthTwo)
    {
        cout << "The lengths of the movie titles " << movieOne << " and " << movieTwo << " are the same\n";
    }


    // Question 3

    cout << "This program may reformat your hard disk. Do you wish to continue? (y/n)\n";
    char answer;
    cin >> answer;
    if (answer == 'y') {
        cout << "Adios Data\n";
    }
    else if (answer == 'n')
    {
        cout << "Wise Choice.\n";
    }
    else
    {
        cout << "That was not a yes or no. I guess I will erase all your data!\n";
    }
}

void switchWorksheet()
{
    // Question 1
    cout << "Enter your letter grade\n";
    char grade;
    cin >> grade;
    switch (grade) {
       case 'a':
           cout << "Your work is outstanding!\n";
        break;
       case 'A':
           cout << "Your work is outstanding\n";
        break;
       case 'b':
           cout << "You are doing good work!\n";
        break;
       case 'B':
           cout << "You are doing good work!\n";
        break;
       case 'c':
           cout << "Your work is satisfactory.\n";
        break;
       case 'C':
           cout << "Your work is satisfactory.\n";
        break;
       case 'd':
           cout << "You need to work a little harder.\n";
        break;
       case 'D':
           cout << "You need to work a little harder.\n";
        break;
       case 'f':
           cout << "Please see me for extra help!\n";
        break;
       case 'F':
           cout << "Please see me for extra help!\n";
        break;
        // Extra thing is default
       default:
           cout << "Invalid input\n";
            cout << "That is not a grade. Do you even go to school?\n";
        break;
    }

    // Question 2

    cout << "Enter a number between 1 and 10.\n";
    int number;
    cin >> number;
    
    switch (number)
    {
        case 1:
            cout << "Your number is a low odd number\n";
            break;
        case 3:
            cout << "Your number is a low odd number\n";
            break;
        case 2:
            cout << "Your number is a low even number\n";
            break;
        case 4:
            cout << "Your number is a low even number\n";
            break;
        case 5:
            cout << "Your number is the middle odd number\n";
            break;
        case 6:
            cout << "Your number is a middle even number\n";
            break;
        case 7:
            cout << "Your number is a high odd number\n";
            break;
        case 9 :
            cout << "Your number is a high odd number\n";
            break;
        case 8:
            cout << "Your number is a high even number\n";
            break;
        case 10:
            cout << "Your number is a high even number\n";
            break;
        default:
            cout << "You entered an invalid number\n";
    }
    
}

int main ()
{
    // Method for worksheet called if worksheets
  //  ifWorksheets();

    
    // Method for worksheet called if else 
    //ifElseWorksheets();

    
    // Working With Logical Operaters worksheet method
    //workingWithLogicalOperaters();

    
    // More If Else Worksheet Method
    //moreIfElseWorksheet();

    // Switch Worksheet Method

    switchWorksheet();
}
