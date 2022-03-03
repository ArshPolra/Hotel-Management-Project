# include <iostream>
# include "room.h"
# include "luxury_room.h"
# include "deluxe_room.h"
# include "standard_room.h"
# include <string>
using namespace std; 

int main(){


	room *room1 = new luxury_room;
	room *room2 = new deluxe_room; 
	room *room3 = new standard_room; 
	
	cout << endl << "LUXURY ROOM: " << endl; 

	room1->num_bed(1); 
	room1->set_num_bathrooms(1); 
	room1->get_room_number(); 
	room1->set_cost(1); 

	//cout << "Swimming pool access(1 = True & 0 = False): " << room1->swimmingpool_access(1) << endl; 
	cout << "Number of beds:" << room1->get_num_bed(1) << endl; 
	cout << "Number of bathrooms: " << room1->get_num_bathrooms(1) << endl; 
	//cout << "Gym access(1 = True & 0 = False): " <<  room1->gym_access(1) << endl; 
	cout << "Room cost: " << room1->get_cost(1) << endl;
	cout << "Room avaible(1 = True & 0 = False): " << room1->available(1) << endl;
	cout << "Customer ID: " << room1->get_cust_id(1) << endl;

	cout << endl << "DELUXE ROOM: " << endl; 

	room2->num_bed(2); 
	room2->set_num_bathrooms(2); 
	room2->get_room_number(); 
	room2->set_cost(2); 

	cout << "Number of beds:" << room2->get_num_bed(2) << endl; 
	cout << "Number of bathrooms: " << room2->get_num_bathrooms(2) << endl; 
	cout << "Room cost: " << room2->get_cost(2) << endl;
	cout << "Room avaible(1 = True & 0 = False): " << room2->available(2) << endl;
	cout << "Customer ID: " << room2->get_cust_id(2) << endl;


	cout << endl << "STANDARD ROOM: " << endl; 

	room3->num_bed(3); 
	room3->set_num_bathrooms(3); 
	room3->get_room_number(); 
	room3->set_cost(3); 
  
	cout << "Number of beds:" << room3->get_num_bed(3) << endl; 
	cout << "Number of bathrooms: " << room3->get_num_bathrooms(3) << endl; 
	cout << "Room cost: " << room3->get_cost(3) << endl;
	cout << "Room avaible(1 = True & 0 = False): " << room3->available(3) << endl;
	cout << "Customer ID: " << room3->get_cust_id(3) << endl << endl;;

  room3->basic_facilities();

	return 0; 
}
