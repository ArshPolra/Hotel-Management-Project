# ifndef HOTEL_H
# define HOTEL_H
# include "customer.h"
# include "room.h"
# include "luxury_room.h"
# include "deluxe_room.h"
# include "standard_room.h"
# include <string>

// abstract class 
class hotel 
{

public: 

	hotel();
	void checkin();  // to chekin a  customer
	bool checkout(int id); // to check out the customer
	int *rooms_available(); // check what room is avaible 
	void book_room(); // allows the customer to book availbele rooms 
	void booking_interface(); // display the current stats of the hotel
	void set_rooms(); // setting the room 
	int *budget_rooms(); // getting a customer's budget
	void room_facilities(); // adding and showing the facilites of a room 
	bool hotel_full(); // checking if the hotel is full 
	~hotel();

	customer* cust_list;
	room* rooms_lux;
	room* rooms_dul;
	room* rooms_std;
	int available[10]; 
	int booked[10];
	int cost[10];
	int tn; 
	int temp_i;
	int count_lux;
	int count_dul;
	int count_std;
	int new_id;
	int id_count;
	int budget;
	int budget_available[10];
	int hotel_count;
	int cur_room; 
	// int new_index; 
	
	


};
#endif


/*
bool checkout(int id)
	{
		for(int i = 0 ; i < 50 ; i++) {
			if(id == cust_list.get_customer_ID())
			{
				customer[i] = NULL;
				return true;
			}
		}

		return false;
	} 
*/
