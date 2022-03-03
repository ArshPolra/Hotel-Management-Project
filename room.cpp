# include <iostream>
# include "customer.h"
# include "room.h"
# include <string>
using namespace std; 

int room::room_num = 1; 

room::room()
{

 	room_price = 0;
 	num_beds = 0; 
 	num_bathrooms = 0; 
 	id_cust = -1; 
 	overall_cost = 0;

 	cur_room_num = room_num;
 	room_num++;


}


bool room::available(int room_num)
{

	if(id_cust < 0){

		return true;

	}else{
		return false; 
	}

}

void room::set_cost_overall(int cost)
{

 	overall_cost = cost;
}

int room::cost_overall(int room_num)
{

	return overall_cost;

}


int room::get_room_number()
{

	return cur_room_num;

}

int room::get_num_bed(int room_num1)
{

	return num_beds; 

}

int room::get_num_bathrooms(int room_num)
{

	return num_bathrooms;

}

int room::get_cost(int room_num)
{

	return room_price;

}


int room::get_cust_id(int room_num)
{

	return id_cust; 

}

void room::basic_facilities() 
{

			cout << "=======================" << endl; 
			cout << "|| Basic facilities: ||" << endl;
			cout << "=======================" << endl;
			cout << endl;

			cout << "1) Free swimmingpool access" << endl; 
			cout << "2) Free wifi access" << endl;
			cout << "3) Free room service" << endl;


}
	  
room::~room()
{


} 
