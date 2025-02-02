#include <iostream>
using namespace std;

class Employee {
  public:
  string NameEmp;
  string RoloEmp;
  float sal;
  float hrsWorked;
  float hrsRate;
  float overTimeWork;
  virtual void calculatePay() = 0;

  Employee(){
   NameEmp = "Default";
    RoloEmp = "Default";
    sal = 0;
    hrsRate = 0;
    overTimeWork = 0;
    hrsWorked = 0;
  };
  virtual ~Employee(){};
  virtual void getEmployeeData() = 0;
  virtual void displayWeeklyPay() {
    calculatePay();
    cout <<NameEmp << " (" << RoloEmp << "): $" << sal << endl;
  }
};

class FullTimeEmployee : public Employee {
  void calculatePay() {}

public:
  FullTimeEmployee() {
    Employee::RoloEmp = "Full-Time";
  }
  void getEmployeeData() {
    cout << "Enter details for " << RoloEmp << " Employee" << endl;
    cout << "n: ";
    cin>>NameEmp;
    cout << "sal: ";
    cin >> sal;
    
  }
};

class PartTimeEmployee : public Employee {
  void calculatePay() {
    if (hrsWorked > 40) {
      overTimeWork = hrsWorked - 40;
    }
    sal = ((hrsWorked - overTimeWork) * hrsRate) +
             (overTimeWork * hrsRate * 1.5);
  }

public:
  PartTimeEmployee() {
    Employee::RoloEmp = "Part-Time";
  }
  void getEmployeeData() {
    cout << "Enter details for " << RoloEmp << " Employee" << endl;
    cout << "n: ";
    cin>>NameEmp;
    cout << "Hourly RoloEmpate: ";
    cin >> hrsRate;
    cout << "Hours Worked: ";
    cin >> hrsWorked;
    
  }
  void displayWeeklyPay() {
    calculatePay();
    cout <<NameEmp << " (" << RoloEmp << "): $" << sal << " ("
         << hrsWorked - overTimeWork << " RoloEmpegular hours + " << overTimeWork << " overtime hours)" << endl;
  }
};

class Contractor : public Employee {
  void calculatePay() { sal = hrsWorked * hrsRate; }

public:
  Contractor() {
    Employee::RoloEmp = "Contractor";
  }
  void getEmployeeData() {
    cout << "Enter details for " << RoloEmp << " Employee" << endl;
    cout << "n: ";
    cin>>NameEmp;
    cout << "Hourly RoloEmpate: ";
    cin >> hrsRate;
    cout << "Hours Worked: ";
    cin >> hrsWorked;
    
  }
};

int main()
{
  int r,t,y;
  cout<<"Number of Full time Employee,Number of Part time Employee & Number of Contracters";
  cin>>r>>t>>y;
  int NameEmpoOfEmployees = r+t+y;
  int NameEmpoOfFullTime = r;
  int NameEmpoOfPartTime = t;
  int NameEmpoOfContractors = y;

  Employee *Emp[NameEmpoOfEmployees];

  int z = 0;
  for (int q = 0; q <NameEmpoOfFullTime; q++) {
    Emp[z] =new FullTimeEmployee;
    Emp[z]->getEmployeeData();
    z++;
    cout << endl;
  }
  for (int q = 0; q <NameEmpoOfPartTime; q++) {
    Emp[z] =new PartTimeEmployee;
    Emp[z]->getEmployeeData();
    z++;
    cout << endl;
  }
  for (int q = 0; q <NameEmpoOfContractors; q++) {
    Emp[z] =new Contractor;
    Emp[z]->getEmployeeData();
    z++;
    cout << endl;
  }

  cout << "Weekly Payroll:" << endl;
  for (int x = 0; x <NameEmpoOfEmployees; x++) {
    Emp[x]->displayWeeklyPay();
  }
  
  for (int i = 0; i <NameEmpoOfEmployees; i++) {
    delete (Emp[i]);
  }
}