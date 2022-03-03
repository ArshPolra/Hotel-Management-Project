# include <iostream>
# include "room.h"
# include "deluxe_room.h"
# include "customer.h"
# include <string>
using namespace std; 


deluxe_room::deluxe_room()
{	
	overall_cost = room_price;

}

void  deluxe_room::num_bed(int room_num)
{

	num_beds = 2; 


}


void deluxe_room::set_num_bathrooms(int room_num)
{

	num_bathrooms = 1;


}


void deluxe_room::set_cost(int room_num)
{

	room_price = 500;

}

int deluxe_room::new_cust(customer new_customer)
{

	id_cust = new_customer.get_customer_ID();
	return id_cust;

}

void deluxe_room::advanced_facilities()
{
	overall_cost = room_price;
	cout << "=========================" << endl; 
	cout << "|| Advanced facilities: ||" << endl;
	cout << "==========================" << endl;
	cout << endl;

	cout << "1) Gym access for $20" << endl; 
	cout << "2) Indoor playground and arcade for $30" << endl;
	cout << "3) Theater room $ 15" << endl;
	cout << "4) Buffet for $30" << endl;
	cout << endl;

	string answer; 
	cout << "Do you want to add advanced facilities? (type \"y\" for yes and \"n\" for no): ";
	cin >> answer; 
	cout << endl;
	cout << endl;
	
	if(answer == "y"){

		//system("clear");


		deluxe_room::gym_access();
		deluxe_room::arcade_playground_access();
		deluxe_room::theater_access();
		deluxe_room::buffet_access();
		
		


	}else{

		cout << "Your reservation has been confirmed!" << endl;
    cout << "The total cost is: $" << overall_cost << endl;
	}



}

bool deluxe_room::gym_access()
{
		string answer; 
		cout << "1) Do you want gym access for extra $20: (type \"y\" for yes and \"n\" for no): ";
		cin >> answer;
		cout << endl; 


	if(answer == "y"){
		overall_cost = overall_cost+20; 
    cout << "Running cost of the facilities: $" << overall_cost << endl;
		return true; 

	}else{
		return false;
	}

}

bool deluxe_room::arcade_playground_access()
{

	string answer; 
	cout << "2) Do you want arcade and playground access for extra $30: (type \"y\" for yes and \"n\" for no): ";
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


bool deluxe_room::theater_access()
{

	string answer; 
	cout << "3) Do you want Theater access for extra $15: (type \"y\" for yes and \"n\" for no): ";
	cin >> answer;
	cout << endl; 

	if(answer == "y"){
	
		overall_cost = overall_cost+15;
    cout << "Running cost of the facilities: $" << overall_cost << endl; 
		return true; 

	}else{
		return false; 
	}


}


bool deluxe_room::buffet_access()
{

	string answer; 
	cout << "4) Do you want buffet access for extra $30: (type \"y\" for yes and \"n\" for no): ";
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

deluxe_room::~deluxe_room()
{



}
