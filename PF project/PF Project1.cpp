#include <iostream>
#include <string>
#include<iomanip>
using namespace std;
const int MAX_MEDICINES = 10;
const int MAX_PATIENTS = 10;
const int MAX_DOCTORS = 5;
string medicines[MAX_MEDICINES][3]; // name, quantity, price
int medicineCount = 0;
string patients[MAX_PATIENTS][2]; // name, age
int patientCount = 0;
string doctors[MAX_DOCTORS][2]; // name, specialization
int doctorCount = 0;
void addMedicine() {
  if (medicineCount < MAX_MEDICINES) {
    cout << "Enter medicine name: ";
    cin >> medicines[medicineCount][0];
    cout << "Enter quantity: ";
    cin >> medicines[medicineCount][1];
    cout << "Enter price: ";
    cin >> medicines[medicineCount][2];
    medicineCount++;
  } else {
    cout << "Medicine storage is full!" << endl;
  }
}

void addPatient() {
  if (patientCount < MAX_PATIENTS) {
    cout << "Enter patient name: ";
    cin >> patients[patientCount][0];
    cout << "Enter patient age: ";
    cin >> patients[patientCount][1];
    patientCount++;
  } else {
    cout << "Patient list is full!" << endl;
  }
}

void addDoctor() {
  if (doctorCount < MAX_DOCTORS) {
    cout << "Enter doctor name: ";
    cin >> doctors[doctorCount][0];
    cout << "Enter doctor's specialization: ";
    cin >> doctors[doctorCount][1];
    doctorCount++;
  } else {
    cout << "Doctor list is full!" << endl;
  }
}

void displayMedicines() {
  cout << "\n===== List of Medicines =====\n";
  for (int i = 0; i < medicineCount; ++i) {
    cout << "Medicine " << i + 1 << ": " << endl;
    cout << "Name: " << medicines[i][0] << endl;
    cout << "Quantity: " << medicines[i][1] << endl;
    cout << "Price: " << medicines[i][2] << endl;
    cout << "--------------------------\n";
  }
}

void displayPatients() {
  cout << "\n===== List of Patients =====\n";
  for (int i = 0; i < patientCount; ++i) {
    cout << "Patient " << i + 1 << ": " << endl;
    cout << "Name: " << patients[i][0] << endl;
    cout << "Age: " << patients[i][1] << endl;
    cout << "--------------------------\n";
  }
}

void displayDoctors() {
  cout << "\n===== List of Doctors =====\n";
  for (int i = 0; i < doctorCount; ++i) {
    cout << "Doctor " << i + 1 << ": " << endl;
    cout << "Name: " << doctors[i][0] << endl;
    cout << "Specialization: " << doctors[i][1] << endl;
    cout << "--------------------------\n";
  }
}

void displayMenu() {
  cout << "\n===== Medical Information System =====\n";
  cout << "1. Add Medicine\n";
  cout << "2. Add Patient\n";
  cout << "3. Add Doctor\n";
  cout << "4. Display Medicines\n";
  cout << "5. Display Patients\n";
  cout << "6. Display Doctors\n";
  cout << "7. Exit\n";
}

int main() {
  
  cout << "=========================" << endl;
  cout << "=========================" << endl;
  cout << setw(20)<<"Welcome to MIS"<< endl;
  cout << "=========================" << endl;
  cout << "=========================" << endl;
  int choice;

MainMenu:
  displayMenu();
  cout << "Enter your choice: ";
  cin >> choice;

  switch (choice) {
  case 1:
    addMedicine();
    goto MainMenu;
  case 2:
    addPatient();
    goto MainMenu;
  case 3:
    addDoctor();
    goto MainMenu;
  case 4:
    displayMedicines();
    goto MainMenu;
  case 5:
    displayPatients();
    goto MainMenu;
  case 6:
    displayDoctors();
    goto MainMenu;
  case 7:
    cout << "Exiting... Thank you!\n";
    break;
  default:
    cout << "Invalid choice! Please try again.\n";
    goto MainMenu;
  }
  return 0;
}
