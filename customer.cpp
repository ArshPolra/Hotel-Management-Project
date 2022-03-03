# include <iostream>
# include <string>
# include "customer.h"
using namespace std; 


customer::customer()
{

	name = "?";
	email = "?"; 
	checked = false ;
	total_cost = 0; 
	id = 0; 
	room_n = 0; 
}

// This behaviour checkos if the customer exisits or not 
bool customer::get_checked()
{
	return checked ;
}

// setting if the customer is checkedin 
void customer::set_checked(bool n)
{
	checked = n ;
}

// setting customer name 
void customer::set_name(string customer_name)
{

	name = customer_name; 

}

// setting customer email adress 
void customer::set_contact_details(string contact_email)
{

	email = contact_email;

}

// setting customer ID
void customer::set_customer_ID(int customer_ID)
{

	id = customer_ID;

}

// assigning a room number to the customer 
void customer::set_my_room(int room_number)
{

	room_n = room_number;

}


// returning custoemer name 
string customer::get_name()
{

	return name; 

} 

// returning customer email adress 
string customer::get_contact_details()
{

	return email;

}

// returning room number allocated to the customer 
int customer::get_my_room(int customer_ID)
{

	return room_n;

}

// returning custoemr ID
int customer::get_customer_ID()
{

	return id; 

}


customer::~customer()
{


}
