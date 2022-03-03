# include <iostream>
# include "room.h"
# include "standard_room.h"
# include "customer.h"
# include <string>
using namespace std; 


standard_room::standard_room()
{
	
	overall_cost = room_price;
}


// Setting the number of bedes 
void  standard_room::num_bed(int room_num)
{

	num_beds = 1; 


}

// Setting the number of bathrooms 
void standard_room::set_num_bathrooms(int room_num)
{

	num_bathrooms = 1;


}

// Setting the room price 
void standard_room::set_cost(int room_num)
{

	room_price = 100;


}

// Adding customers 
int standard_room::new_cust(customer new_customer)
{

	id_cust = new_customer.get_customer_ID();
	return id_cust;

}

// Providing extra features 
void standard_room::advanced_facilities()
{
	overall_cost = room_price;
	cout << "=========================" << endl; 
	cout << "|| Advanced facilities: ||" << endl;
	cout << "==========================" << endl;
	cout << endl;

	cout << "1) Indoor playground and arcade for $30" << endl;
	cout << "2) Buffet for $30" << endl;
	cout << endl;

	string answer; 
	cout << "Do you want to add advanced facilities? (type \"y\" for yes and \"n\" for no): ";
	cin >> answer; 
	cout << endl;
	cout << endl;
	
	if(answer == "y"){

		//system("clear");

		standard_room::arcade_playground_access();
		standard_room::buffet_access();
		
		


	}else{

		cout << "Your reservation has been confirmed!" << endl;
    cout << "The total cost is: $" << overall_cost << endl;
	}



}

// Asking for if the user wants this facility
bool standard_room::arcade_playground_access()
{

	string answer; 
	cout << "1) Do you want arcade and playground access for extra $30: (type \"y\" for yes and \"n\" for no): ";
	cin >> answer;
	cout << endl; 

	if(answer == "y"){

		overall_cost = overall_cost+30; 
    cout << "Running cost of the facilities: $" << overall_cost << endl;
		return true; 

	}else{
		return false; 
	}

}


// Asking for if the user wants this facility
bool standard_room::buffet_access()
{

	string answer; 
	cout << "2) Do you want buffet access for extra $30: (type \"y\" for yes and \"n\" for no): ";
	cin >> answer;
	cout << endl; 

	if(answer == "y"){
		overall_cost = overall_cost+30;
    cout << "Running cost of the facilities: $" << overall_cost << endl;
		cout << "Your reservation has been confirmed!" << endl;
		cout << "The total cost is: $"  << overall_cost << endl;
		cout << endl;

		return true; 

	}else{

		cout << "Your reservation has been confirmed!" << endl;
		cout << "The total cost is: $"  << overall_cost << endl;
		cout << endl;
		return false; 
		
	}

}



standard_room::~standard_room()
{



}
