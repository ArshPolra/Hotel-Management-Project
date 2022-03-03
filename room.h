# ifndef ROOM_H
# define ROOM_H
# include "customer.h"
# include <string>

// Abstract class
class room
{

public: 

	room();

	bool available(int room_num);  // check if the room is available	
	virtual void num_bed(int room_num) = 0; 
	virtual void set_num_bathrooms(int room_num) = 0;
	virtual int new_cust(customer new_customer) = 0; 
	virtual void set_cost(int room_num) = 0; 
	virtual void advanced_facilities() = 0;
	int get_cust_id(int room_num); 
	int get_room_number();
	int get_num_bed(int room_num);
	int get_num_bathrooms(int room_num);
	int get_cost(int room_num);
	void basic_facilities(); 
	int cost_overall(int room_num);
	void set_cost_overall(int cost);
	  
	~room(); 

	static int room_num; 
	int cur_room_num;
	int room_price; 
	int num_beds;
	int num_bathrooms;
	customer new_customer;  
	int id_cust; 
	int overall_cost; 


};
# endif
