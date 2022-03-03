# ifndef LUXURY_ROOM_H
# define LUXURY_ROOM_H
# include "room.h"
# include "customer.h"
# include <string>

// luxury room class 
class luxury_room : public room 
{

public: 

	luxury_room();
	void num_bed(int room_num); // setting the number of beds 
	void set_num_bathrooms(int room_num); // setting the number of bathrooms 
	void advanced_facilities(); // setting advanced facilities 
	bool gym_access(); // checking if the user wants gym access 
	bool arcade_playground_access();// checking if the user wants arcade and playground access 
	bool massage_access(); // checking if the user wants massage services 
	bool theater_access(); // checking if the user wants theater room access
	bool vip_lounge_access();// checking if the user wants VIP lounge access 
	bool buffet_access();// checking if the user wants buffer access 
	void set_cost(int room_num); // setting room cost 
	int cost_overall(int room_num); // returning the overall cost 
	int new_cust(customer new_customer); //  setting a new customer to the room 
	void set_cost_overall(int cost); // setting the over all cost s
	~luxury_room();

};
# endif 
