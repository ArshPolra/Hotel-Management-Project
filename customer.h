# ifndef CUSTOMER_H
# define CUSTOMER_H
# include <string>

// Creating a class for customer
class customer
{

public:

	customer();
	void set_name(std::string customer_name); // setting customer name 
	void set_contact_details(std::string contact_email); // setting customer email adress 
	void set_customer_ID(int customer_ID); // setting custome ID
	void set_my_room(int room_number); // allocating a room number to a customer 
	std::string get_name();  // returning the name of the customer 
	std::string get_contact_details(); // returning the email adress of the customer 
	int get_my_room(int room_number); // returning the allocated room number to the customer 
	int get_customer_ID(); // returning the customer ID
	bool get_checked(); // returning if the customer is checked-in/is iexisting 
	void set_checked(bool n); // checking if the customer is checked-in/is existing 
	~customer();

	std::string name; 
	std::string email; 
	int room_n;
	int id; 
	bool checked;
	int cust_budget;
	int total_cost;
};
#endif
