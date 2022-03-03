# ifndef STANDARD_ROOM_H
# define STANDARD_ROOM_H
# include "room.h"

# include "customer.h"
# include <string>

class standard_room : public room 
{

public: 

	standard_room();
	void num_bed(int room_num); 
	void set_num_bathrooms(int room_num);
	void set_cost(int room_num);
	void advanced_facilities(); 
	int new_cust(customer new_customer); 
	bool arcade_playground_access();
	bool buffet_access();
	void set_cost_overall(int cost);
	~standard_room();

};
# endif 
