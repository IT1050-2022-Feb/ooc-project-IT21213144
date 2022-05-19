//MLB_02.02_05_VehicleRentalSystem
//IT21213144
//Employee class
#include <iostream>
#include <cstring>
#include "Report.h"
#include "Payment.h"
#include "User.h"
using namespace std;
class Employee: public User
{
 protected:
 int empID;
 char position[15];
 char NIC[12];
 Report* rep[5];
 Payment* pay[5];
 
 public: 
 Employee()
 {
 strcpy(name, "");
 contactNumber = 0;
 strcpy(email, "");
 strcpy(adress, "");
 empID = 0;
 strcpy(position, "");
 strcpy(NIC, "");
 };
 void addEmployee(const char ename[30], int econtactNumber, const char Eemail[50],const char 
eadress[100], int employeeID, const char ePosition[15], const char nicNo[12]);
 
 void updateEmployee(int employeeID, const char ePosition[15], const char nicNo[12]);
 
 void checkPayment();
 
 void viewReport();
 
 ~Employee()
 {
 cout << "Employee " << empID << " deleted " <<endl;
 };
}