# ifndef DELUXE_ROOM_H
# define DELUXE_ROOM_H
# include "room.h"
# include "customer.h"
# include <string>

class deluxe_room : public room 
{

public: 

	deluxe_room();
	void num_bed(int room_num); 
	void set_num_bathrooms(int room_num);
	void set_cost(int room_num);
	void advanced_facilities();
	int new_cust(customer new_customer);
	bool gym_access();
	bool buffet_access();
	bool arcade_playground_access();
	bool theater_access(); 
	~deluxe_room();




};
# endif 
