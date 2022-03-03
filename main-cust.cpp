# include <iostream>
# include <string>
# include "customer.h"
# include <limits>

using namespace std; 

int main()
{
  for (int i = 0; i < 6; i++) {
  cout << "Test " << i+1 << ":";
  
  int num_of_customers = 0;

  //cout << "Enter the number of customers you want to enter: ";
  // cin >> num_of_customers;
  while (!(cin >> num_of_customers)) {  
    cin.clear();   
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
    //cout << "Bad input, try again: ";
  }
  cout << endl;

  if (num_of_customers <= 0) {
    //cout << "Please enter a value that is greater than 0 for the number of customers you want to enter: ";
    cin >> num_of_customers;
  }

	customer customer[num_of_customers]; 
  string name[num_of_customers];
  string email[num_of_customers];

  for(int i=0; i<num_of_customers; i++) {
    //cout << "Enter the name of customer " << i+1 << ": ";
    cin >> name[i];

    //cout << "Enter the email address of customer " << i+1 << ": ";
    cin >> email[i];

    cout << endl;
  }

  for(int i=0; i<num_of_customers; i++) {
    customer[i].set_name(name[i]);
    customer[i].set_contact_details(email[i]);
    customer[i].set_customer_ID(i+1);
  }

  for(int i=0; i<num_of_customers; i++) {
    cout << "Customer " << i+1 << ":" << endl;
    cout << "Customer Name: " << customer[i].get_name() << endl; 
	  cout << "Customer Email Address: " << customer[i].get_contact_details() << endl;
	  cout << "Customer ID: " << customer[i].get_customer_ID() << endl; 
    cout << endl;
  }
  }

	return 0; 
}
