#include<iostream>
#include<conio.h>
#include <Windows.h>
#include<string>
#include<cstring>
using namespace std;
void set_AutoMenu() //Gloabal Function
{
int Zinger = 350, Marben = 550, Bymark = 250, Grill = 190, Std = 100;
int Vinilla = 100, Choco = 150, Coco = 110, Caramel = 140, T_F = 250;
int coke = 80, sprite = 60, fanta = 50, malt = 70, sting = 70;
cout << "\t\t\t\t\t*TODAY'S MENU*\n\n";
cout << "\t Burgers Price\t IceCreams(per scoope) Price\t Drinks(Regular) Price\n\n";
cout << "\t(1)Zinger " << Zinger << "Rs\t (6)Vinilla " << Vinilla << "Rs\t (11)Coke " << coke << "Rs\n";
cout << "\t(2)Marben " << Marben << "Rs\t (7)Chocolate " << Choco << "Rs\t (12)Sprite " << sprite << "Rs\n";
cout << "\t(3)Bymark " << Bymark << "Rs\t (8)Coconut " << Coco << "Rs\t (13)Fanta " << fanta << "Rs\n";
cout << "\t(4)Grill " << Grill << "Rs\t (9)Caramel " << Caramel << "Rs\t (14)Lemon Malt " << malt << "Rs\n";
cout << "\t(5)Student " << Std << "Rs\t (10)Tutti Fruti " << T_F << "Rs\t (15)Sting " << sting << "Rs\n";
}
class Date
{
private:
int date;
int month;
int year;
public:
Date() //Default Cosntructor
{
date = 0;
month = 0;
year = 0;
}
Date(int d, int m, int y) //Parameterized Cosntructor
{
date = d;
month = m;
year = y;
}
void set_date()
{
cin >> date;
if (date > 31)
{
cout << "In-Valid!"; return;
}
}
void set_month()
{
cin >> month;
if (month > 12)
{
cout << "In-Valid!"; exit(0);
}
}
void set_year()
{
cin >> year;
if (year > 2022)
{
cout << "In-Valid!"; exit(0);
}
}
int get_date()
{
return date;
}
int get_month()
{
return month;
}
int get_year()
{
return year;
}
void set_FullDate()
{
set_date(); cout << "-"; set_month(); cout << "-"; set_year();
}
void get_FullDate()
{
cout << get_date() << "-" << get_month() << "-" << get_year() << endl;
}
void set_preDate(int d, int m, int y)
{
date = d;
month = m;
year = y;
}
};
class Person
{
public:
string name;
long int CNIC;
Person() //Default Cosntructor
{
name = "";
CNIC = 0;
}
Person(string n, int cnic) //Parameterized Constructor
{
name = n;
CNIC = cnic;
}
void setName()
{
cin >> name;
}
void setCNIC()
{
cin >> CNIC;
}
string getName()
{
return name;
}
int getCNIC()
{
return CNIC;
}
void set_Credentials(string n, long int num)
{
name = n, CNIC = num;
}
void get_Credentials()
{
cout << "Name: " << getName() << endl;
cout << "CNIC NO: " << getCNIC() << endl;
}
};
class Labour :public Person {
protected:
char department;
int salary;
Date DOH; //DOH stands for Date Of Hiring
public:
Labour() //Default Cosntructor
{
department = '0';
salary = 0;
}
Labour(string n, int cnic, Date doh, char dp, int s) :Person(n, cnic) //Parameterized Cosntructor
{
department = dp;
salary = s;
DOH = doh;
}
void show(string n, int cnic, char dp, int s)
{
name = n; CNIC = cnic; department = dp; salary = s;
cout << "Name: " << name << "\nCNIC: " << cnic;
cout << "\nDepartment: " << department << "\nSalary: " << salary << endl;
}
void set_NewLabourData()
{
cout << "\tEnter Data Of New Labour.\n";
cout << "Name: "; setName();
cout << "CNIC: "; setCNIC(); DOH.set_preDate(31, 12, 2022);//change according to latest date plz
cout << "Date Of Hiring: "; DOH.get_FullDate();
setDepartment();
setSalary();
}
void get_NewLabourData()
{
cout << "\n\t*Updated Records*\n\tData Of New Labour\n";
get_Credentials();
cout << "Date Of Hiring: "; DOH.get_FullDate();
getDepartment();
getSalary();
}
void setDepartment()
{
cout << "Press 'B/b' [billing department] and Press 'S/s' [serving department]\nDepartment: ";
cin >> department;
}
void setSalary()
{
salaryOfPerson();
}
void getDepartment()
{
Department();
}
void getSalary()
{
cout << "Salary: " << salary;
}
void Department()
{
if (department == 'S' || department == 's')
{
cout << "Department: Serving " << endl;
}
else if (department == 'B' || department == 'b')
{
cout << "Department: Billing " << endl;
}
else
{
cout << "In-Valid Department!";
}
}
void salaryOfPerson()
{
if (department == 'S' || department == 's')
{
salary = 15000;
cout << "Salary of Servering Employee is: " << salary << endl;
}
else if (department == 'B' || department == 'b')
{
salary = 25000;
cout << "Salary of Billing employee is: " << salary << endl;
}
else
{
cout << "In-Valid!";
}
}
};
class Manager :public Person {
protected:
int Manager_password;
public:
Manager()
{
Manager_password = 0;
}
Manager(string n, int cnic, int mp) :Person(n, cnic)
{
Manager_password = mp;
}
void set_Managerpassword()
{
cin >> Manager_password;
}
int get_Managerpassword()
{
return Manager_password;
}
void change_ManagerPassword()
{
cout << "Previous Password: ";
set_Managerpassword();
if (get_Managerpassword() == 6789)
{
cout << "New password: ";
cin >> Manager_password;
cout << "New Password For Manager: " << Manager_password;
}
else
{
cout << "Incorrect Password!";
}
}
void ManagerAccess()
{
cout << "Enter Password(MANAGER): ";
cin >> Manager_password;
if (get_Managerpassword() == 6789)
{
cout << "\n\t*Hi! Manager Welcome.*\n\n";
int choice;
char ch;
set_Credentials("Muhammad Javaid", 123);
do
{
cout << "Manager's Name: " << getName() << "\t CNIC: " << getCNIC() << endl << endl;
cout << "(1)Set Automatic Menu\n(2)Change Prices And Update Menu\n(3)Change Your Password\n";
cin >> choice;
if (choice == 1)
{
set_AutoMenu();
}
else if (choice == 2)
{
set_ManualMenu();
}
else if (choice == 3)
{
change_ManagerPassword();
}
else
{
cout << "Invalid Entry!";
}
cout << "Any more function to perform?[Y/N]";
cin >> ch;
} while (ch == 'Y' || ch == 'y');
}
else
{
cout << "\n\t\tInvalid Password!\n\n";
}
}
void set_ManualMenu()
{
char change;
cout << "\n\t\t*Now You Can Change Prices*\n\n";
cout << "(a)To change price of Burgers\n(b)To change price of IceCreams\n(c)To change price of Drinks\n";
cin >> change;
if (change == 'a')
{
cout << "Changing Prices Of Burgers\n";
int Zinger, Marben, Bymark, Grill, S;
cout << "\nZinger "; cin >> Zinger;
cout << "Marben "; cin >> Marben;
cout << "Bymark "; cin >> Bymark;
cout << "Grill "; cin >> Grill;
cout << "Student "; cin >> S;
cout << "\tUPDATED MENU\n";
cout << "\tBurgers Price\t IceCreams(per scoope) Price\tDrinks(Regular) Price\n\n";
cout << "\tZinger " << Zinger << "Rs\t Vinilla 100Rs\t Coke 80Rs\n";
cout << "\tMarben " << Marben << "Rs\t Chocolate 150Rs\t Sprite 60Rs\n";
cout << "\tBymark " << Bymark << "Rs\t Coconut 110Rs\t Fanta 50Rs\n";
cout << "\tGrill " << Grill << "Rs\t Caramel 140Rs\t Lemon Malt 70Rs\n";
cout << "\tStudent " << S << "Rs\t Tutti Fruti 250Rs\t Sting 80Rs\n";
}
else if (change == 'b')
{
cout << "Changing Prices Of IceCreams\n";
int Vinilla, Choco, Coco, Caramel, T_F;
cout << "\nVinilla "; cin >> Vinilla;
cout << "Chocolate "; cin >> Choco;
cout << "Coconut "; cin >> Coco;
cout << "Caramel "; cin >> Caramel;
cout << "Tutti Fruti "; cin >> T_F;
cout << "\tUPDATED MENU\n";
cout << "\tBurgers Price\t IceCreams(per scoope) Price\tDrinks(Regular) Price\n\n";
cout << "\tZinger 350Rs\t Vinilla " << Vinilla << "Rs\t Coke 80Rs\n";
cout << "\tMarben 550Rs\t Chocolate " << Choco << "Rs\t Sprite 60Rs\n";
cout << "\tBymark 250Rs\t Coconut " << Coco << "Rs\t Fanta 50Rs\n";
cout << "\tGrill 190Rs\t Caramel " << Caramel << "Rs\t Lemon Malt 70Rs\n";
cout << "\tStudent 100Rs\t Tutti Fruti " << T_F << "Rs\t Sting 80Rs\n";
}
else if (change == 'c')
{
cout << "Changing Prices Of Drinks\n";
int coke, sprite, fanta, malt, sting;
cout << "Coke "; cin >> coke;
cout << "Sprite "; cin >> sprite;
cout << "Fanta "; cin >> fanta;
cout << "Lemon Malt "; cin >> malt;
cout << "Sting "; cin >> sting;
cout << "\tBurgers Price\t IceCreams(per scoope) Price\tDrinks(Regular) Price\n\n";
cout << "\tZinger 350Rs\t Vinilla 100Rs\t Coke " << coke << "Rs\n";
cout << "\tMarben 550Rs\t Chocolate 150Rs\t Sprite " << sprite << "Rs\n";
cout << "\tBymark 250Rs\t Coconut 110Rs\t Fanta " << fanta << "Rs\n";
cout << "\tGrill 190Rs\t Caramel 140Rs\t Lemon Malt " << malt << "Rs\n";
cout << "\tStudent 100Rs\t Tutti Fruti 250Rs\t Sting " << sting << "Rs\n";
}
else
{
cout << "Invalid!\n";
}
}
};
class Admin :public Person {
protected:
int Admin_Password;
Labour L;
Date D;
public:
Admin()
{
Admin_Password = 0;
}
Admin(string n, int cnic, int ad, Labour l, Date d) :Person(n, cnic)
{
Admin_Password = ad;
L = l;
D = d;
}
void set_AdminPassword()
{
cin >> Admin_Password;
}
int get_AdminPassword()
{
return Admin_Password;
}
void change_password()
{
cout << "Previous Password: ";
set_AdminPassword();
if (get_AdminPassword() == 1234)
{
cout << "New password: ";
cin >> Admin_Password;
cout << "New Password For Admin: " << Admin_Password;
}
else
{
cout << "Incorrect Password!";
}
}
void show_PreviousRecords()
{
cout << "\tManager\n";
set_Credentials("Muhammad Pervez", 123);
cout << "Name: " << getName() << "\nCNIC: " << getCNIC() << "\nSalary: 50,000\n";
cout << "Date of hiring: "; D.set_preDate(23, 02, 2013); D.get_FullDate();
cout << "\tLabour No 1\n";
L.show("Dayan Ahmed", 234, 'b', 25000);
cout << "Date of hiring: "; D.set_preDate(11, 05, 2016); D.get_FullDate();
cout << "\tLabour No 2\n";
L.show("Mubashir Ali", 565, 's', 15000);
cout << "Date of hiring: "; D.set_preDate(15, 10, 2017); D.get_FullDate();
cout << "\tLabour No 3\n";
L.show("Noman Khan", 896, 's', 15000);
cout << "Date of hiring: "; D.set_preDate(23, 06, 2018); D.get_FullDate();
}
void Admin_Access()
{
cout << "Enter Password(ADMIN): ";
cin >> Admin_Password;
if (get_AdminPassword() == 1234)
{
cout << "\n\n\t\t\t*Hi! Admin Welcome.*\n\n";
int choice;
set_Credentials("Muhammad Pervez", 123);
cout << "\tAdmin's Name: " << getName() << "\t CNIC: " << getCNIC() << endl;
cout << "\n(1)Show Previous Record\n(2)Change Your Password\n(3)Add New Labour And See Updated Record\n";
cin >> choice;
if (choice == 1)
{
show_PreviousRecords();
}
else if (choice == 2)
{
change_password();
}
else if (choice == 3)
{
L.set_NewLabourData();
L.get_NewLabourData();
cout << endl;
show_PreviousRecords();
}
else
{
cout << "Invalid Entry!";
}
}
else
{
cout << "\n\t\tInvalid Password!\n\n";
}
}
};
class customer:public Person{ // class Of Customer For ordering Food
protected:
string cname; //Here cname is refered as coutmer name
public:
customer()
{
cname = " ";
}
customer(string n, int cnic, string c_n) :Person(n, cnic)
{
cname = c_n;
}
void set_CustomerInfo()
{
cout << "Coustmer Name: "; cin >> cname;
}
void get_CustomerInfo()
{
cout << "Coustmer Name: ";
cout << cname;
}
void Start()
{
cout << "\t\t\t**Welcome*" << endl;
get_CustomerInfo();
}
void orderAndBill() // Function For taking order from customer and print bill
{
int choice;
int total1 = 0, total2 = 0, total3 = 0, total4 = 0, total5 = 0, total6 = 0, total7 = 0, total8 = 0,
total9 = 0, total10 = 0, total11 = 0, total12 = 0, total13 = 0, total14 = 0, total15 = 0;
int quantity;
char ch;
do {
int Zinger = 350, Marben = 550, Bymark = 250, Grill = 190, Std = 100;
int Vinilla = 100, Choco = 150, Coco = 110, Caramel = 140, T_F = 250;
int coke = 80, sprite = 60, fanta = 50, malt = 70, sting = 70;
set_AutoMenu(); //Calling Global Function
cout << "\t\t\t*Place Your Order*" << endl;
cout << "Enter Choice: ";
cin >> choice;
switch (choice)
{
case 1:
cout << "Burger Zinger " << Zinger << endl;
cout << "Enter quantity you want: ";
cin >> quantity;
total1 = total1 + (quantity * Zinger);
cout << "Total price: " << total1 << endl;
cout << "DO U WANT TO ORDER MORE[Y/N]:";
cin >> ch;
break;
case 2:
cout << "burger Marben " << Marben << endl;
cout << "Enter quantity you want: ";
cin >> quantity;
total2 = total2 + (quantity * Marben);
cout << "Total price: " << total2 << endl;
cout << "DO U WANT TO ORDER MORE[Y/N]:";
cin >> ch;
break;
case 3:
cout << "burger Bymark " << Bymark << endl;
cout << "Enter quantity you want: ";
cin >> quantity;
total3 = total3 + (quantity * Bymark);
cout << "Total price: " << total3 << endl;
cout << "DO U WANT TO ORDER MORE[Y/N]:";
cin >> ch;
break;
case 4:
cout << "burger Grill " << Grill << endl;
cout << "Enter quantity you want: ";
cin >> quantity;
total4 = total4 + (quantity * Grill);
cout << "Total price: " << total4 << endl;
cout << "DO U WANT TO ORDER MORE[Y/N]:";
cin >> ch;
break;
case 5:
cout << "burger Std " << Std << endl;
cout << "Enter quantity you want: ";
cin >> quantity;
total5 = total5 + (quantity * Marben);
cout << "Total price: " << total5 << endl;
cout << "DO U WANT TO ORDER MORE[Y/N]:";
cin >> ch;
break;
case 6:
cout << "Ice-Cream Vinilla " << Vinilla << endl;
cout << "Enter quantity you want: ";
cin >> quantity;
total6 = total6 + (quantity * Vinilla);
cout << "Total price: " << total6 << endl;
cout << "DO U WANT TO ORDER MORE[Y/N]:";
cin >> ch;
break;
case 7:
cout << "Ice-Cream Chocolate " << Choco << endl;
cout << "Enter quantity you want: ";
cin >> quantity;
total7 = total7 + (quantity * Choco);
cout << "Total price: " << total7 << endl;
cout << "DO U WANT TO ORDER MORE[Y/N]:";
cin >> ch;
break;
case 8:
cout << "Ice-Cream Coconut " << Coco << endl;
cout << "Enter quantity you want: ";
cin >> quantity;
total8 = total8 + (quantity * Coco);
cout << "Total price: " << total8 << endl;
cout << "DO U WANT TO ORDER MORE[Y/N]:";
cin >> ch;
break;
case 9:
cout << "Ice-Cream Caramel " << Caramel << endl;
cout << "Enter quantity you want: ";
cin >> quantity;
total9 = total9 + (quantity * Caramel);
cout << "Total price: " << total9 << endl;
cout << "DO U WANT TO ORDER MORE[Y/N]:";
cin >> ch;
break;
case 10:
cout << "Ice-Cream Tutti Frutti " << T_F << endl;
cout << "Enter quantity you want: ";
cin >> quantity;
total10 = total10 + (quantity * T_F);
cout << "Total price: " << total10 << endl;
cout << "DO U WANT TO ORDER MORE[Y/N]:";
cin >> ch;
break;
case 11:
cout << "Cold Drink Coke " << coke << endl;
cout << "Enter quantity you want: ";
cin >> quantity;
total11 = total11 + (quantity * coke);
cout << "Total price: " << total11 << endl;
cout << "DO U WANT TO ORDER MORE[Y/N]:";
cin >> ch;
break;
case 12:
cout << "Cold Drink Sprite " << sprite << endl;
cout << "Enter quantity you want: ";
cin >> quantity;
total12 = total12 + (quantity * sprite);
cout << "Total price: " << total12 << endl;
cout << "DO U WANT TO ORDER MORE[Y/N]:";
cin >> ch;
break;
case 13:
cout << "Cold Drink Fanta " << fanta << endl;
cout << "Enter quantity you want: ";
cin >> quantity;
total13 = total13 + (quantity * fanta);
cout << "Total price: " << total13 << endl;
cout << "DO U WANT TO ORDER MORE[Y/N]:";
cin >> ch;
break;
case 14:
cout << "Cold Drink Sprite " << malt << endl;
cout << "Enter quantity you want: ";
cin >> quantity;
total14 = total14 + (quantity * malt);
cout << "Total price: " << total14 << endl;
cout << "DO U WANT TO ORDER MORE[Y/N]:";
cin >> ch;
break;
case 15:
cout << "Cold Drink Sting " << sting << endl;
cout << "Enter quantity you want: ";
cin >> quantity;
total15 = total15 + (quantity * sting);
cout << "Total price: " << total15 << endl;
cout << "DO U WANT TO ORDER MORE[Y/N]:";
cin >> ch;
break;
default:
cout << "The food you want dont exists" << endl;
}
} while (ch == 'y' || ch == 'Y');
cout << "total Bill Amount is: " << total1 + total2 + total3 + total4 + total5 + total6 + total7 + total8
+ total9 + total10 + total11 + total12 + total13 + total14 + total15 << endl;
cout << "\t\t\t*Thanks For Visiting Our Restaurant" << endl;
}
};
int main()
{
char ch;
do {
int choice;
cout << "\n\t\t\t**press 1 for Admin Access" << endl;
cout << "\t\t\t**press 2 for Manager Access" << endl;
cout << "\t\t\t**press 3 for Coustmer Order" << endl;
cout << "\t\t\t**press 4 for EXIT" << endl;
cin >> choice;
if (choice == 1)
{
Admin a;
a.Admin_Access();
}
else if (choice == 2)
{
Manager m;
m.ManagerAccess();
}
else if (choice == 3)
{
customer c;
c.set_CoustmerInfo();
c.Start();
c.orderAndBill();
}
else
{
cout << "\n\t\tGOOD BYE!\n\n";
}
cout << "DO you want to go to Main Operations [Y/N] ";
cin >> ch;
system("cls");
} while (ch == 'Y' || ch == 'y');
_getch();
return 0;
}
