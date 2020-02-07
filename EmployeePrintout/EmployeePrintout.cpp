/// <summary>
/// CSCI 182
/// EmployeePrintout.cpp
/// Print out employee information using structs
/// 
/// Lydia Pierce
/// v1.0 2/7/2020
/// </summary>

#include <iostream>
#include <string>
using namespace std;
 
// Declares the enum and type for what position the employee is
enum EMPLOYEE_TYPE { MANAGER, EMPLOYEE, VOLUNTEER };

/// <summary>
/// Converts enum EMPLOYEE_TYPE to the corresponding string
/// </summary>
/// <param name="type"></param>
/// <returns></returns>
string EMPLOYEEToStr(EMPLOYEE_TYPE type)
{
    switch (type)
    {
    case MANAGER: return "Manager";
    case EMPLOYEE: return "Employee";
    case VOLUNTEER: return "Volunteer";
    default: return "Umemployed";
    };
};

/// <summary>
/// A struct that contains the address of the input employee
/// </summary>
struct Address
{
    string City;
    string State;
};

/// <summary>
/// A struct that contains the employee's information
/// </summary>
struct Employee
{
    string Name;
    int DivisionNo;
    Address address;   // See how this is nested?
    EMPLOYEE_TYPE position;
} employeeinfo;

/// <summary>
/// Take the input employee information, feed it through the structs, print to the screen
/// </summary>
/// <returns></returns>
int main()
{
    // Input the employee's information into the variables.
    employeeinfo.Name = "Bob Smith";
    employeeinfo.DivisionNo = 36;
    employeeinfo.address.City = "St. Louis";
    employeeinfo.address.State = "MO";
    employeeinfo.position = MANAGER;

    // Pretty print the employee's information to the screen
    cout << "Position: " << EMPLOYEEToStr(employeeinfo.position) << "; Name: " << employeeinfo.Name << "; Division Number: " << employeeinfo.DivisionNo
        << "; Address: " << employeeinfo.address.City << ", " << employeeinfo.address.State << "\n";
    return 0;
};


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
