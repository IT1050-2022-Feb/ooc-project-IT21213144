//MLB_02.02_05_VehicleRentalSystem
//IT21213144
//Accountant class
#include <iostream>
#include <cstring>
#include "Payment.h"
#include"Discount.h"
#include"Employee.h"
using namespace std;
class Accountant : public Employee
{
 
 protected:
 int accID;
 Payment* pay[5];
 Discount* dis[5];
 public:
 
 Accountant()
 {
 strcpy(name, "");
 contactNumber = 0;
 strcpy(email, "");
 strcpy(adress, "");
 strcpy(position, "");
 strcpy(NIC, "");
 accID = 0;
 
 };
 void addAccountant(const char aname[30], int acontactNumber, const char aemail[50],const char 
aAdress[100], int accID, const char nicNo[12]);
 
 void updateAccountant(int accID);
 void calculateSalary();
 void calculatePayment();
 
 ~Accountant()
 {
 cout << "Accountant " << accID << "deleted" <<endl;
 };
};
