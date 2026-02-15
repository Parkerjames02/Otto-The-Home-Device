/*
Parker Haynie
12/1/2022
Otto - The Home Assistance Device
*/

// This is the header file that contains all of the functions like "cout" and "cin".
#include <iostream>
// This is a header file for a stream class that can read and write from/to files.
#include <fstream>
// This is the header that tells the program to use a variable that has a type std::string.
#include <string>
// This tells the program to look at the standard namespace for everything that is not declared.
using namespace std;

// This initializes the char variable "again" and sets it equal to "Y".
char again = 'Y';
// This initializes the char variable "ViewOrNew".
char ViewOrNew;
// This initializes the int variable "WhichList".
int WhichList;
// This initializes the string variable "LivInput".
string LivInput;
// This initializes the string variable "KitInput".
string KitInput;
// This initializes the string variable "BedInput".
string BedInput;
// This initializes the string variable "BathInput".
string BathInput;
// This initializes the string variable "LaunInput".
string LaunInput;

// This is the "main()" function. This is the first function that the program looks at.
int main()
{
    // This line initializes a fstream called "LivFile". I can use this to create a file,
    // write information to files, and read information from files.
    fstream LivFile;
    // This line initializes a fstream called "KitFile". I can use this to create a file,
    // write information to files, and read information from files.
    fstream KitFile;
    // This line initializes a fstream called "BedFile". I can use this to create a file,
    // write information to files, and read information from files.
    fstream BedFile;
    // This line initializes a fstream called "BathFile". I can use this to create a file,
    // write information to files, and read information from files.
    fstream BathFile;
    // This line initializes a fstream called "LaunFile". I can use this to create a file,
    // write information to files, and read information from files.
    fstream LaunFile;
    // This line displays the title of the program.
    cout << "                 Otto - The Home Assitance Device" << endl;
    cout << "---------------------------------------------------------------------" << endl;
    // Lines 55-59 are all used to display a description for the program.
    cout << "Hello, my name is Otto and I am your home assitance device. I am" << endl;
    cout << "capable of doing many things but my main feature is helping you" << endl;
    cout << "remember where you have placed your bellongings. Go ahead and test" << endl;
    cout << "out this feature by deciding which kind of action you would like to" << endl;
    cout << "perform and then picking which room you would like to view or change." << endl;
    cout << "---------------------------------------------------------------------\n" << endl;
    // This is a while loop that allows the user to perform another task for another list.
    while (again == 'y' || again == 'Y')
    {
        cout << "Would you like to view a list, edit a list, or make a new list for a room?\n" << endl;
        cout << "V = View List" << endl;
        cout << "E = Edit List" << endl;
        cout << "N = New List" << endl;
        // This line allows the user to chose between viewing a list, editing a list, or making a new list.
        cin >> ViewOrNew;
        // View List -----------------------------------------------------------------------------------------------------------------
        // This if/else only goes through if the user chose to view a list by typing in "v" or "V".
        if (ViewOrNew == 'v' || ViewOrNew == 'V')
        {
            cout << "\nNow please decide which list you would like to view." << endl;
            cout << endl;
            cout << "1 = Living Room List" << endl;
            cout << "2 = Kitchen List" << endl;
            cout << "3 = Bedroom List" << endl;
            cout << "4 = Bathroom List" << endl;
            cout << "5 = Laundry Room List" << endl;
            // This line allows the user to chose a room list that they would like to view.
            cin >> WhichList;
            // This switch statement will determine what room list you view upon the users input.
            switch (WhichList)
            {
                // This case only occurs if the user decides to view the Living Room list.
            case 1:
                // This line is used to open the "LivingRoom.txt" file in "input mode".
                LivFile.open("LivingRoom.txt", ios::in); //read
                // This if/else statement will detect if the "LivingRoom.txt" file can be opened.
                if (LivFile.is_open())
                {
                    string line;
                    cout << "\nLiving Room List:" << endl;
                    cout << "-----------------" << endl;
                    // This while loop will check every line on the list and then set the line variable to the information that is collected.
                    while (getline(LivFile, line)) {
                        cout << line << endl;
                    }
                    // This line closes the "LivFile" after displaying the "line" variable to the consule.
                    LivFile.close();
                    cout << "\nWould you like to perform another task?" << endl;
                    cout << "(Please enter 'y' for yes and 'n' for no)" << endl;
                    cin >> again;
                    cout << endl;
                }
                else
                {
                    cout << "\nERROR: Could not open the Living Room file." << endl;
                    cout << "\nWould you like to perform another task?" << endl;
                    cout << "(Please enter 'y' for yes and 'n' for no)" << endl;
                    cin >> again;
                    cout << endl;
                }
                break;
                // This case only occurs if the user decides to view the Kitchen list.
            case 2:
                // This line is used to open the "Kitchen.txt" file in "input mode".
                KitFile.open("Kitchen.txt", ios::in); //read
                // This if/else statement will detect if the "Kitchen.txt" file can be opened.
                if (KitFile.is_open())
                {
                    string line;
                    cout << "\nKitchen List:" << endl;
                    cout << "-------------" << endl;
                    // This while loop will check every line on the list and then set the line variable to the information that is collected.
                    while (getline(KitFile, line)) {
                        cout << line << endl;
                    }
                    // This line closes the "KitFile" after displaying the "line" variable to the consule.
                    KitFile.close();
                    cout << "\nWould you like to perform another task?" << endl;
                    cout << "(Please enter 'y' for yes and 'n' for no)" << endl;
                    cin >> again;
                    cout << endl;
                }
                else
                {
                    cout << "\nERROR: Could not open the Kitchen file." << endl;
                    cout << "\nWould you like to perform another task?" << endl;
                    cout << "(Please enter 'y' for yes and 'n' for no)" << endl;
                    cin >> again;
                    cout << endl;
                }
                break;
                // This case only occurs if the user decides to view the Bedroom list.
            case 3:
                // This line is used to open the "Bedroom.txt" file in "input mode".
                BedFile.open("Bedroom.txt", ios::in); //read
                // This if/else statement will detect if the "Bedroom.txt" file can be opened.
                if (BedFile.is_open())
                {
                    string line;
                    cout << "\nBedroom List:" << endl;
                    cout << "-------------" << endl;
                    // This while loop will check every line on the list and then set the line variable to the information that is collected.
                    while (getline(BedFile, line)) {
                        cout << line << endl;
                    }
                    // This line closes the "BedFile" after displaying the "line" variable to the consule.
                    BedFile.close();
                    cout << "\nWould you like to perform another task?" << endl;
                    cout << "(Please enter 'y' for yes and 'n' for no)" << endl;
                    cin >> again;
                    cout << endl;
                }
                else
                {
                    cout << "\nERROR: Could not open the Bedroom file." << endl;
                    cout << "\nWould you like to perform another task?" << endl;
                    cout << "(Please enter 'y' for yes and 'n' for no)" << endl;
                    cin >> again;
                    cout << endl;
                }
                break;
                // This case only occurs if the user decides to view the Bathroom list.
            case 4:
                // This line is used to open the "Bathroom.txt" file in "input mode".
                BathFile.open("Bathroom.txt", ios::in); //read
                // This if/else statement will detect if the "Bathroom.txt" file can be opened.
                if (BathFile.is_open())
                {
                    string line;
                    cout << "\nBathroom List:" << endl;
                    cout << "--------------" << endl;
                    // This while loop will check every line on the list and then set the line variable to the information that is collected.
                    while (getline(BathFile, line)) {
                        cout << line << endl;
                    }
                    // This line closes the "BathFile" after displaying the "line" variable to the consule.
                    BathFile.close();
                    cout << "\nWould you like to perform another task?" << endl;
                    cout << "(Please enter 'y' for yes and 'n' for no)" << endl;
                    cin >> again;
                    cout << endl;
                }
                else
                {
                    cout << "\nERROR: Could not open the Bathroom file." << endl;
                    cout << "\nWould you like to perform another task?" << endl;
                    cout << "(Please enter 'y' for yes and 'n' for no)" << endl;
                    cin >> again;
                    cout << endl;
                }
                break;
                // This case only occurs if the user decides to view the Laundry Room list.
            case 5:
                // This line is used to open the "Laundry Room.txt" file in "input mode".
                LaunFile.open("Laundry Room.txt", ios::in); //read
                // This if/else statement will detect if the "Laundry Room.txt" file can be opened.
                if (LaunFile.is_open())
                {
                    string line;
                    cout << "\nLaundry Room List:" << endl;
                    cout << "------------------" << endl;
                    // This while loop will check every line on the list and then set the line variable to the information that is collected.
                    while (getline(LaunFile, line)) {
                        cout << line << endl;
                    }
                    // This line closes the "LaunFile" after displaying the "line" variable to the consule.
                    LaunFile.close();
                    cout << "\nWould you like to perform another task?" << endl;
                    cout << "(Please enter 'y' for yes and 'n' for no)" << endl;
                    cin >> again;
                    cout << endl;
                }
                else
                {
                    cout << "\nERROR: Could not open the Laundry Room file." << endl;
                    cout << "\nWould you like to perform another task?" << endl;
                    cout << "(Please enter 'y' for yes and 'n' for no)" << endl;
                    cin >> again;
                    cout << endl;
                }
                break;
                // This default case only occurs if the user enters an invalid number.
            default:
                cout << "\nERROR: You entered an invalid number." << endl;
                cout << "\nWould you like to perform another task?" << endl;
                cout << "(Please enter 'y' for yes and 'n' for no)" << endl;
                cin >> again;
                cout << endl;
            }
        }
        // Edit List -----------------------------------------------------------------------------------------------------------------
        // This if/else only goes through if the user chose to edit a list by typing in "e" or "E".
        else if (ViewOrNew == 'e' || ViewOrNew == 'E')
        {
            cout << "\nNow please decide which list you would like to edit." << endl;
            cout << "1 = Living Room List" << endl;
            cout << "2 = Kitchen List" << endl;
            cout << "3 = Bedroom List" << endl;
            cout << "4 = Bathroom List" << endl;
            cout << "5 = Laundry Room List" << endl;
            // This line allows the user to chose a room list that they would like to edit.
            cin >> WhichList;
            // This switch statement will determine what room list you edit upon the users input.
            switch (WhichList)
            {
                // This case only occurs if the user decides to edit the Living Room list.
            case 1:
                // This line is used to open the "LivingRoom.txt" file in "append mode".
                LivFile.open("LivingRoom.txt", ios::app); //append
                // This if/else statement will detect if the "LivingRoom.txt" file can be opened.
                if (LivFile.is_open())
                {
                    cout << "\nPlease type in what you want to add on to the Living Room list:" << endl;
                    getline(cin.ignore(1, '\n'), LivInput);
                    LivFile << LivInput << endl;
                    // This line closes the "LivFile" after allowing the user to add something on to the list.
                    LivFile.close();
                    cout << "\nWould you like to perform another task?" << endl;
                    cout << "(Please enter 'y' for yes and 'n' for no)" << endl;
                    cin >> again;
                    cout << endl;
                }
                else
                {
                    cout << "\nERROR: Could not open the Living Room file." << endl;
                    cout << "\nWould you like to perform another task?" << endl;
                    cout << "(Please enter 'y' for yes and 'n' for no)" << endl;
                    cin >> again;
                    cout << endl;
                }
                break;
                // This case only occurs if the user decides to edit the Kitchen list.
            case 2:
                // This line is used to open the "Kitchen.txt" file in "append mode".
                KitFile.open("Kitchen.txt", ios::app); //append
                // This if/else statement will detect if the "Kitchen.txt" file can be opened.
                if (KitFile.is_open())
                {
                    cout << "\nPlease type in what you want to add on to the Kitchen list:" << endl;
                    getline(cin.ignore(1, '\n'), KitInput);
                    KitFile << KitInput << endl;
                    // This line closes the "KitFile" after allowing the user to add something on to the list.
                    KitFile.close();
                    cout << "\nWould you like to perform another task?" << endl;
                    cout << "(Please enter 'y' for yes and 'n' for no)" << endl;
                    cin >> again;
                    cout << endl;
                }
                else
                {
                    cout << "\nERROR: Could not open the Kitchen file." << endl;
                    cout << "\nWould you like to perform another task?" << endl;
                    cout << "(Please enter 'y' for yes and 'n' for no)" << endl;
                    cin >> again;
                    cout << endl;
                }
                break;
                // This case only occurs if the user decides to edit the Bedroom list.
            case 3:
                // This line is used to open the "Bedroom.txt" file in "append mode".
                BedFile.open("Bedroom.txt", ios::app); //append
                // This if/else statement will detect if the "Bedroom.txt" file can be opened.
                if (BedFile.is_open())
                {
                    cout << "\nPlease type in what you want to add on to the Bedroom list:" << endl;
                    getline(cin.ignore(1, '\n'), BedInput);
                    BedFile << BedInput << endl;
                    // This line closes the "BedFile" after allowing the user to add something on to the list.
                    BedFile.close();
                    cout << "\nWould you like to perform another task?" << endl;
                    cout << "(Please enter 'y' for yes and 'n' for no)" << endl;
                    cin >> again;
                    cout << endl;
                }
                else
                {
                    cout << "\nERROR: Could not open the Bedroom file." << endl;
                    cout << "\nWould you like to perform another task?" << endl;
                    cout << "(Please enter 'y' for yes and 'n' for no)" << endl;
                    cin >> again;
                    cout << endl;
                }
                break;
                // This case only occurs if the user decides to edit the Bathroom list.
            case 4:
                // This line is used to open the "Bathroom.txt" file in "append mode".
                BathFile.open("Bathroom.txt", ios::app); //append
                // This if/else statement will detect if the "Bathroom.txt" file can be opened.
                if (BathFile.is_open())
                {
                    cout << "\nPlease type in what you want to add on to the Bathroom list:" << endl;
                    getline(cin.ignore(1, '\n'), BathInput);
                    BathFile << BathInput << endl;
                    // This line closes the "BathFile" after allowing the user to add something on to the list.
                    BathFile.close();
                    cout << "\nWould you like to perform another task?" << endl;
                    cout << "(Please enter 'y' for yes and 'n' for no)" << endl;
                    cin >> again;
                    cout << endl;
                }
                else
                {
                    cout << "\nERROR: Could not open the Bathroom file." << endl;
                    cout << "\nWould you like to perform another task?" << endl;
                    cout << "(Please enter 'y' for yes and 'n' for no)" << endl;
                    cin >> again;
                    cout << endl;
                }
                break;
                // This case only occurs if the user decides to edit the Laundry room list.
            case 5:
                // This line is used to open the "Laundry Room.txt" file in "append mode".
                LaunFile.open("Laundry Room.txt", ios::app); //append
                // This if/else statement will detect if the "Laundry Room.txt" file can be opened.
                if (LaunFile.is_open())
                {
                    cout << "\nPlease type in what you want to add on to the Laundry Room list:" << endl;
                    getline(cin.ignore(1, '\n'), LaunInput);
                    LaunFile << LaunInput << endl;
                    // This line closes the "LaunFile" after allowing the user to add something on to the list.
                    LaunFile.close();
                    cout << "\nWould you like to perform another task?" << endl;
                    cout << "(Please enter 'y' for yes and 'n' for no)" << endl;
                    cin >> again;
                    cout << endl;
                }
                else
                {
                    cout << "\nERROR: Could not open the Laundry Room file." << endl;
                    cout << "\nWould you like to perform another task?" << endl;
                    cout << "(Please enter 'y' for yes and 'n' for no)" << endl;
                    cin >> again;
                    cout << endl;
                }
                break;
                // This default case only occurs if the user enters an invalid number.
            default:
                cout << "\nERROR: You entered an invalid number." << endl;
                cout << "\nWould you like to perform another task?" << endl;
                cout << "(Please enter 'y' for yes and 'n' for no)" << endl;
                cin >> again;
                cout << endl;
            }
        }
        // New List -----------------------------------------------------------------------------------------------------------------
        // This if/else only goes through if the user chose to make a new list by typing in "n" or "N".
        else if (ViewOrNew == 'n' || ViewOrNew == 'N')
        {
            cout << "\nNow please decide which room you would like to make a new list for." << endl;
            cout << "1 = Living Room" << endl;
            cout << "2 = Kitchen" << endl;
            cout << "3 = Bedroom" << endl;
            cout << "4 = Bathroom" << endl;
            cout << "5 = Laundry Room" << endl;
            // This line allows the user to chose a room that they would like to make a new list for.
            cin >> WhichList;
            // This switch statement will determine what room you want to make a new list for upon the users input.
            switch (WhichList)
            {
                // This case only occurs if the user decides to make a new list for the Living Room.
            case 1:
                // This line is used to open the "LivingRoom.txt" file in "output mode".
                LivFile.open("LivingRoom.txt", ios::out); //write
                // This if/else statement will detect if the "LivingRoom.txt" file can be opened.
                if (LivFile.is_open())
                {
                    cout << "\nPlease type in what you want for the new Living Room list:" << endl;
                    getline(cin.ignore(1, '\n'), LivInput);
                    LivFile << LivInput << endl;
                    // This line closes the "LivFile" after allowing the user to add something on to the new list.
                    LivFile.close();
                    cout << "\nWould you like to perform another task?" << endl;
                    cout << "(Please enter 'y' for yes and 'n' for no)" << endl;
                    cin >> again;
                    cout << endl;
                }
                else
                {
                    cout << "\nERROR: Could not open the Living Room file." << endl;
                    cout << "\nWould you like to perform another task?" << endl;
                    cout << "(Please enter 'y' for yes and 'n' for no)" << endl;
                    cin >> again;
                    cout << endl;
                }
                break;
                // This case only occurs if the user decides to make a new list for the Kitchen.
            case 2:
                // This line is used to open the "Kitchen.txt" file in "output mode".
                KitFile.open("Kitchen.txt", ios::out); //write
                // This if/else statement will detect if the "Kitchen.txt" file can be opened.
                if (KitFile.is_open())
                {
                    cout << "\nPlease type in what you want for the new Kitchen list:" << endl;
                    getline(cin.ignore(1, '\n'), KitInput);
                    KitFile << KitInput << endl;
                    // This line closes the "LivFile" after allowing the user to add something on to the new list.
                    KitFile.close();
                    cout << "\nWould you like to perform another task?" << endl;
                    cout << "(Please enter 'y' for yes and 'n' for no)" << endl;
                    cin >> again;
                    cout << endl;
                }
                else
                {
                    cout << "\nERROR: Could not open the Kitchen file." << endl;
                    cout << "\nWould you like to perform another task?" << endl;
                    cout << "(Please enter 'y' for yes and 'n' for no)" << endl;
                    cin >> again;
                    cout << endl;
                }
                break;
                // This case only occurs if the user decides to make a new list for the Bedroom.
            case 3:
                // This line is used to open the "Bedroom.txt" file in "output mode".
                BedFile.open("Bedroom.txt", ios::out); //write
                // This if/else statement will detect if the "Bedroom.txt" file can be opened.
                if (BedFile.is_open())
                {
                    cout << "\nPlease type in what you want for the new Bedroom list:" << endl;
                    getline(cin.ignore(1, '\n'), BedInput);
                    BedFile << BedInput << endl;
                    // This line closes the "LivFile" after allowing the user to add something on to the new list.
                    BedFile.close();
                    cout << "\nWould you like to perform another task?" << endl;
                    cout << "(Please enter 'y' for yes and 'n' for no)" << endl;
                    cin >> again;
                    cout << endl;
                }
                else
                {
                    cout << "\nERROR: Could not open the Bedroom file." << endl;
                    cout << "\nWould you like to perform another task?" << endl;
                    cout << "(Please enter 'y' for yes and 'n' for no)" << endl;
                    cin >> again;
                    cout << endl;
                }
                break;
                // This case only occurs if the user decides to make a new list for the Bathroom.
            case 4:
                // This line is used to open the "Bathroom.txt" file in "output mode".
                BathFile.open("Bathroom.txt", ios::out); //write
                // This if/else statement will detect if the "Bathroom.txt" file can be opened.
                if (BathFile.is_open())
                {
                    cout << "\nPlease type in what you want for the new Bathroom list:" << endl;
                    getline(cin.ignore(1, '\n'), BathInput);
                    BathFile << BathInput << endl;
                    // This line closes the "LivFile" after allowing the user to add something on to the new list.
                    BathFile.close();
                    cout << "\nWould you like to perform another task?" << endl;
                    cout << "(Please enter 'y' for yes and 'n' for no)" << endl;
                    cin >> again;
                    cout << endl;
                }
                else
                {
                    cout << "\nERROR: Could not open the Bathroom file." << endl;
                    cout << "\nWould you like to perform another task?" << endl;
                    cout << "(Please enter 'y' for yes and 'n' for no)" << endl;
                    cin >> again;
                    cout << endl;
                }
                break;
                // This case only occurs if the user decides to make a new list for the Laundry Room.
            case 5:
                // This line is used to open the "Laundry Room.txt" file in "output mode".
                LaunFile.open("Laundry Room.txt", ios::out); //write
                // This if/else statement will detect if the "Laundry Room.txt" file can be opened.
                if (LaunFile.is_open())
                {
                    cout << "\nPlease type in what you want for the new Laundry Room list:" << endl;
                    getline(cin.ignore(1, '\n'), LaunInput);
                    LaunFile << LaunInput << endl;
                    // This line closes the "LivFile" after allowing the user to add something on to the new list.
                    LaunFile.close();
                    cout << "\nWould you like to perform another task?" << endl;
                    cout << "(Please enter 'y' for yes and 'n' for no)" << endl;
                    cin >> again;
                    cout << endl;
                }
                else
                {
                    cout << "\nERROR: Could not open the Laundry Room file." << endl;
                    cout << "\nWould you like to perform another task?" << endl;
                    cout << "(Please enter 'y' for yes and 'n' for no)" << endl;
                    cin >> again;
                    cout << endl;
                }
                break;
                // This default case only occurs if the user enters an invalid number.
            default:
                cout << "\nERROR: You entered an invalid number." << endl;
                cout << "\nWould you like to perform another task?" << endl;
                cout << "(Please enter 'y' for yes and 'n' for no)" << endl;
                cin >> again;
                cout << endl;
            }
        }
        // Otherwise -----------------------------------------------------------------------------------------------------------------
        // This else statement only occurs if the user enters an invalid letter.
        else
        {
            cout << "\nERROR: You made an incorrect input." << endl;
            cout << "\nWould you like to perform another task?" << endl;
            cout << "(Please enter 'y' for yes and 'n' for no)" << endl;
            cin >> again;
            cout << endl;
        }
    }
    //This line returns the value "0" after main has already ran through everything.
    return 0;
}
