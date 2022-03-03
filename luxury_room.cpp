# include <iostream>
# include "room.h"
# include "luxury_room.h"
# include "customer.h"
# include <string>
#include <cstdlib>
using namespace std; 

luxury_room::luxury_room()
{
 	overall_cost = room_price;

}

void  luxury_room::num_bed(int room_num)
{

	num_beds = 3; 


}

void luxury_room::set_num_bathrooms(int room_num)
{

	num_bathrooms = 2;


}



void luxury_room::set_cost(int room_num)
{

	room_price = 1000;


}

int luxury_room::new_cust(customer new_customer)
{

	id_cust = new_customer.get_customer_ID();
	return id_cust;

}

void luxury_room::advanced_facilities()
{

	overall_cost = room_price;
	cout << "=========================" << endl; 
	cout << "|| Advanced facilities: ||" << endl;
	cout << "==========================" << endl;
	cout << endl;

	cout << "1) Gym access for $20" << endl; 
	cout << "2) Buffet for $30" << endl;
	cout << "3) VIP lounge for $80" << endl;
	cout << "4) Massage service for $20" << endl;
	cout << "5) Indoor playground and arcade for $30" << endl;
	cout << "6) Theater room $ 15" << endl;

	string answer; 
	cout << "Do you want to add advanced facilities? (type \"y\" for yes and \"n\" for no): ";
	cin >> answer; 
	cout << endl;
	cout << endl;

	if(answer == "y"){

		//system("clear");
		luxury_room::gym_access();
		luxury_room::arcade_playground_access();
		luxury_room::massage_access();
		luxury_room::theater_access();
		luxury_room::vip_lounge_access();
		luxury_room::buffet_access();
		


	}else{

		cout << "Your reservation has been confirmed!" << endl;
    cout << "The total cost is: $" << overall_cost << endl;
	}


}



bool luxury_room::gym_access()
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


bool luxury_room::arcade_playground_access()
{

	string answer; 
	cout << "2) Do you want arcade and playground access for extra $30: (type \"y\" for yes and \"n\" for no): ";
	cin >> answer;
	cout << endl; 

	if(answer == "y"){
		overall_cost = overall_cost+30; 
    cout << "Running cost of the facilities: $"  << overall_cost << endl;
		return true; 

	}else{
		return false; 
	}

}


bool luxury_room::massage_access()
{
	string answer; 
	cout << "3) Do you want massage service access for extra $20: (type \"y\" for yes and \"n\" for no): ";
	cin >> answer;
	cout << endl; 

	if(answer == "y"){
		overall_cost = overall_cost+20; 
    cout << "Running cost of the facilities: $"  << overall_cost << endl;
		return true; 

	}else{
		return false; 
	}


}

bool luxury_room::theater_access()
{

	string answer; 
	cout << "4) Do you want Theater access for extra $15: (type \"y\" for yes and \"n\" for no): ";
	cin >> answer;
	cout << endl; 

	if(answer == "y"){
		overall_cost = overall_cost+15; 
    cout << "Running cost of the facilities: $"  << overall_cost << endl;
		return true; 

	}else{
		return false; 
	}


}

bool luxury_room::vip_lounge_access()
{

	string answer; 
	cout << "5) Do you want VIP lounge access for extra $80: (type \"y\" for yes and \"n\" for no): ";
	cin >> answer;
	cout << endl; 

	if(answer == "y"){
		overall_cost = overall_cost+80;
    cout << "Running cost of the facilities: $"  << overall_cost << endl;
		return true; 

	}else{
		return false; 
	}

}



bool luxury_room::buffet_access()
{

	string answer; 
	cout << "6) Do you want buffet access for extra $30: (type \"y\" for yes and \"n\" for no): ";
	cin >> answer;
	cout << endl; 

	if(answer == "y"){
		overall_cost = overall_cost+30;
    cout << "Running cost of the facilities: $"  << overall_cost << endl;
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

void luxury_room::set_cost_overall(int cost)
{

	overall_cost = cost; 

}

int luxury_room::cost_overall(int room_num)
{

	return overall_cost;

}


luxury_room::~luxury_room()
{



}


