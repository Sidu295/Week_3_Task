#include <iostream>
using namespace std;
const int ROWS = 3;
const int COLS = 3;
int SourceData[ROWS][COLS] = {
    {25, 50, 75},
    {125, 150, 175},
    {225, 250, 275}};

void costSlab1()
{
    int Slab1_rate = 10;
    int totalCost = 0;

    cout << "Bill for Slab 1 is" << endl;
    for (int i = 0; i < COLS; ++i)
    {
        totalCost = SourceData[0][i] * Slab1_rate;
        cout << totalCost << "  ";
    }
    cout << endl;
}

void costSlab2()
{
    int Slab2_rate = 15;
    int totalCost = 0;

    cout << "Bill for Slab 2 is" << endl;
    for (int i = 0; i < ROWS; ++i)
    {
        totalCost = SourceData[i][0] * Slab2_rate;
        cout << totalCost << "  ";
    }
    cout << endl;
}

void costSlab3()
{
    int Slab3_rate = 20;
    int totalCost = 0;

    cout << "Bill for Slab 3 is" << endl;
    for (int i = 0; i < COLS; ++i)
    {
        totalCost = SourceData[2][i] * Slab3_rate;
        cout << totalCost << "  ";
    }
    cout << endl;
}

void displayStudentID(string StudentID)
{
    cout << "    Student ID : " << StudentID << endl;
}

int main()
{
    string StudentID = "               F2022266211";
    displayStudentID(StudentID);
    char choice;
    do
    {
        cout << "" << endl;
        cout << " _____________________________________________" << endl;
        cout << "|                   MENU                      |" << endl;
        cout << "|                                             |" << endl;
        cout << "|Press 1 to Display Bill of Slab 1 and Slab 2 |" << endl;
        cout << "|Press 2 to Display Bill of Slab 3            |" << endl;
        cout << "|Press 3 to Exit                              |" << endl;
        cout << "|_____________________________________________|" << endl;
        cout << "Enter Your Choice: ";
        cin >> choice;

        switch (choice)
        {
        case '1':
            costSlab1();
            costSlab2();
            break;
        case '2':
            costSlab3();
            break;
        case '3':
            cout << "Exiting the Program" << endl;
            break;
        default:
            cout << "Invalid Choice! Please Enter a valid choice: ";
            break;
        }

        cout << endl;

    } while (choice == '1' || choice == '2');

    return 0;
}
