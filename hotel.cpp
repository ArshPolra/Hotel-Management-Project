# include <iostream>
# include "hotel.h"
# include "customer.h"
# include "luxury_room.h"
# include "deluxe_room.h"
# include "standard_room.h"
# include "room.h"
# include <limits>
#include <string>
using namespace std; 

// hotel constructor
hotel::hotel()
{

	
	tn = 0;
	temp_i = 0;
	new_id = 0; 
	id_count = 0;
	budget = 0; 
	hotel_count = 0;
	cur_room = 0;  
	count_lux = 3;
	count_dul = 4;
	count_std = 3;
	for(int i = 0; i < 10; i++){

		budget_available[i] = 0; 
	}

	for(int i = 0; i < 10; i++){

		booked[i] = 0;

		available[i] = i + 1 ;

		cost[i] = 0;
	}

	cust_list = new customer[10]; // number of customers
	rooms_lux = new luxury_room[3]; // number of luxury rooms
	rooms_dul = new deluxe_room[4]; // number of dulex rooms 
	rooms_std = new standard_room[3]; // number of standard rooms
}

// Checking if the hotel is full 
bool hotel::hotel_full()
{

	if(hotel_count == 10){

		return true;
	}else{

		return false;
	}

}

// Behaviour to checkin customers 
void hotel::checkin()
{

	int i = 0 ;

	// Entering customer detail 

	string name = "NULL"; 
	string contact = "NULL";  

	cout << "What is your budget for the room: ";
		while (!(cin >> budget)) {  
		    cin.clear();   
		    cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
		    cout << "No string input, try again: ";
	  } 
	cout << endl;

	// Checking if the budget of the user is above the minimum cost of a room 

	if(budget < 100){

		cout << "....." << endl; 

	}else{

		//Taking customer details

      cout << "\nPlease enter the details with first character being a letter !!\n";

			cout << "\nPlease enter your name (full name): "; 
      cin.ignore();
			getline(cin, name, '\n'); 

		// Constraining the user name to be string and the contact detail as @gmail.com which is under 11 characters

      while( !( (name[0]>=65 && name[0]<=90) || (name[0]>=97 && name[0]<=122) ) ) // A to Z || a to z
      {
        cout << "\nError: first character must be an character\n";
        cout << "\nEnter name again: ";
        getline(cin, name, '\n');
      }


			cout << "\n\nPlease enter your email (@gmail.com): "; 
			getline(cin, contact, '\n'); //1sdghk
      bool final_condition = false;
      bool condition = false;
          
          while(final_condition == false || condition == false)
          {
            while( 1 ) // A to Z || a to z
            {
              if((contact[0]>=65 && contact[0]<=90) || (contact[0]>=97 && contact[0]<=122))
              {
                final_condition = true;
                break;
              }else{
                cout << "\nError: first character must be an character\n";
                cout << "\nEnter email again: ";
                getline(cin, contact, '\n');
              }
              
            }

            int length = contact.size();

            // Checling if the users contact os in @gmail.com

            if(condition == true && final_condition == true){
              break;
            }

            if (  length >= 11 &&
              contact[length-1] == 'm' && contact[length-2] == 'o' &&
                contact[length-3] == 'c' && contact[length-4] == '.' &&
                  contact[length-5] == 'l' && contact[length-6] == 'i' &&
                    contact[length-7] == 'a' && contact[length-8] == 'm' &&
                      contact[length-9] == 'g' && contact[length-10] == '@'){
                        condition = true ;
                        final_condition = false;
                      }

            while(condition == false){
              cout << "\nError: Either the size is not correct" << endl
              << "or the extension is not @gmail.com\n";
              cout << "\nEnter again: ";
              getline(cin, contact, '\n');
              length = contact.size();

              if( length >= 11 &&
                  contact[length-1] == 'm' && contact[length-2] == 'o' &&
                  contact[length-3] == 'c' && contact[length-4] == '.' &&
                  contact[length-5] == 'l' && contact[length-6] == 'i' &&
                  contact[length-7] == 'a' && contact[length-8] == 'm' &&
                  contact[length-9] == 'g' && contact[length-10] == '@'){

                        condition = true ;
                        final_condition = false;

              }

            }

            
      }
  

			cout << endl;

		for(int i = 0 ; i < 10 ; i++) 
		{
			if(cust_list[i].get_checked() == 0)
			{
				temp_i = i ;
				cust_list[temp_i].set_name(name);
				cust_list[temp_i].set_contact_details(contact);
				cust_list[temp_i].set_checked(true);
				cust_list[temp_i].set_customer_ID(i);
				id_count++;
				break;
			}
		}

	}




}

//Settin gup the rooms in the hotel

void hotel::set_rooms()
{
	int n = 0;

	for(int i = 0; i < 4; i++){


	 	int n = rooms_dul[i].get_room_number();
		rooms_dul[i].num_bed(n);
		rooms_dul[i].set_num_bathrooms(n);;
		rooms_dul[i].set_cost(n);
		rooms_dul[i].available(n);

	}

	for(int i = 0; i < 3; i++){

	
	 	int n = rooms_std[i].get_room_number();
		rooms_std[i].num_bed(n);
		rooms_std[i].set_num_bathrooms(n);
		rooms_std[i].set_cost(n);
		rooms_std[i].available(n);


	}

	for(int i = 0; i < 3; i++){

	 	int n = rooms_lux[i].get_room_number();
		rooms_lux[i].num_bed(n);
		rooms_lux[i].set_num_bathrooms(n);
		rooms_lux[i].set_cost(n);
		rooms_lux[i].available(n);

	}



}

//Checking out customer

bool hotel::checkout(int id)
{
	// Removes the customer from the cust_list 
	cust_list[id-1].set_checked(false);
	available[ ( booked[id-1] - 1 ) ] = booked[id - 1]; // changes the booked room by the customer who is checking out to available room 
	cout << "t2: " << cost[id] << endl;
	hotel_count--;

	// Updating the live hotel rooms booked board 
	int number = booked[id - 1] ;

	if(number <= 3) {
		count_lux++;
	}else if(number > 3 && number <= 7) {
		count_dul++;
	}else{
		count_std++;
	}

	booked[id-1] = 0 ;
	

	return true ;
}


//Returning the available rooms
int* hotel::rooms_available()
{

	return available; 
}

//Taking the users budget
int* hotel::budget_rooms()
{

	//Setting the budget array to be 0 at first
	for(int i = 0; i < 10; i++){

		budget_available[i] = 0; 
	}

	int lux = 0;
	int dul = 3;
	int std = 7;

	// checking whcih rooms are available for the users budget and saveing those room numbers in the budget_availbe array
	if(budget < 100){

		cout << endl;
		cout << "There is no room available for your budget ";

	}else{
	if(budget >= rooms_lux[0].get_cost(1)){

		for(int i = 0; i < 10; i++){
		budget_available[i] = available[lux];
		lux++; 
		}
		

	}else if(budget >= rooms_dul[0].get_cost(1)){

		for(int i = 0; i < 7; i++){
		budget_available[i] = available[dul];
		dul++; 
		}
		 

	}else if(budget >= rooms_std[0].get_cost(1)){

		for(int i = 0; i < 3; i++){
		budget_available[i] = available[std];
		std++; 
		}
		 

	}
}


	return budget_available; 
}

//booking a room
void hotel::book_room()
{
	//setting temp variables
	int temp_room_num = 0;
	int i = 0; 
	int condition = false;
	int count = 0;

	
	// Asking the user to pick a room from the available rooms
	cout << "Which room would you like to book: ";
	while (!(cin >> temp_room_num)) {  
		    cin.clear();   
		    cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
		    cout << "No string input, try again: ";
	  } 
	cout << endl;
	hotel_count++;
// checking if the user has put a room number which is available 

while(condition != true){

	for(int i = 0; i < 10; i++){

		if(temp_room_num == budget_available[i]){

			condition = true;
	
		}

	}

	
	if(condition == false){
		cout << "That room is not available please enter an available room: ";
		cin >> temp_room_num; 
		cout << endl;
	}


}

	// Assigning customer to their picked room 


	booked[temp_i] = temp_room_num;
	cur_room = temp_room_num;
	available[temp_room_num - 1] = 0 ;

	switch(temp_room_num){

		case 1:

			rooms_lux[0].new_cust(cust_list[temp_i]);
			count_lux--; 
			break;

		case 2:

			rooms_lux[1].new_cust(cust_list[temp_i]);
			count_lux--;
			break;

		case 3:

			rooms_lux[2].new_cust(cust_list[temp_i]);
			count_lux--;
			break;

		case 4:

			rooms_dul[0].new_cust(cust_list[temp_i]);
			count_dul--;
			break;

		case 5:

			rooms_dul[1].new_cust(cust_list[temp_i]);
			count_dul--;
			break;

		case 6:

			rooms_dul[2].new_cust(cust_list[temp_i]);
			count_dul--;
			break;

		case 7:

			rooms_dul[3].new_cust(cust_list[temp_i]);
			count_dul--;
			break;

		case 8:

			rooms_std[0].new_cust(cust_list[temp_i]);
			count_std--;
			break;
		
		case 9:

			rooms_std[1].new_cust(cust_list[temp_i]);
			count_std--;
			break;

		case 10:

			rooms_std[2].new_cust(cust_list[temp_i]);
			count_std--;
			break;
	}

		cust_list[temp_i].set_my_room(temp_room_num); 
	
}

// Showing the interface/hotel log 

void hotel::booking_interface()
{


int temp_cust_id = 0; 
 
			cout << "================" << endl; 
			cout << "|| HOTEL LOG: ||" << endl;
			cout << "================" << endl; 
			cout << endl;
				
	// Showing the customers who booked the room with their details along with room num and customer ID		
	for(int i = 0; i < 10; i++){

		string temp_name = "/0";
		string temp_email = "/0";
		temp_name = cust_list[i].get_name(); 
		temp_email = cust_list[i].get_contact_details();

		if(temp_name != "?"){
		if(booked[i] != 0){

			bool condition = false;
			cout << "Booked Rooms: ";
			cout << booked[i] << endl;
			cout << "Customer ID: ";
			switch(booked[i]){

		case 1:


			cout << rooms_lux[0].get_cust_id(booked[i]) + 1<< endl;
			cout << "Overall cost: $" << rooms_lux[0].cost_overall(booked[i])<< endl;
			break;	


		case 2:

			
			cout << rooms_lux[1].get_cust_id(booked[i]) + 1<< endl;
			cout << "Overall cost: $" << rooms_lux[1].cost_overall(booked[i])<< endl;
			break;


		case 3:

			cout << rooms_lux[2].get_cust_id(booked[i]) + 1<< endl; 
			cout << "Overall cost: $" << rooms_lux[2].cost_overall(booked[i])<< endl;
			break;
		  

		case 4:

			cout << rooms_dul[0].get_cust_id(booked[i]) + 1 << endl;
			cout << "Overall cost: $" << rooms_dul[0].cost_overall(booked[i])<< endl;
			break;
		    

		case 5:

			cout << rooms_dul[1].get_cust_id(booked[i]) + 1<< endl;
			cout << "Overall cost: $" << rooms_dul[1].cost_overall(booked[i])<< endl;
			break;
		 

		case 6:

			cout << rooms_dul[2].get_cust_id(booked[i]) + 1<< endl; 
			cout << "Overall cost: $" << rooms_dul[2].cost_overall(booked[i])<< endl;
			break;


		case 7:

			cout << rooms_dul[3].get_cust_id(booked[i]) + 1<< endl;
			cout << "Overall cost: $" << rooms_dul[3].cost_overall(booked[i])<< endl;
			break;
		 

		case 8:

			cout << rooms_std[0].get_cust_id(booked[i]) + 1<< endl;
			cout << "Overall cost: $" << rooms_std[0].cost_overall(booked[i])<< endl;
			break;
		    
		
		case 9:

			cout << rooms_std[1].get_cust_id(booked[i]) + 1<< endl;
			cout << "Overall cost: $" << rooms_std[1].cost_overall(booked[i])<< endl;
			break;
		  

		case 10:

			cout << rooms_std[2].get_cust_id(booked[i]) + 1<< endl;
			cout << "Overall cost: $" << rooms_std[2].cost_overall(booked[i])<< endl;
			break;
		    
	}
			if(condition == false){
			cout << "=======================" << endl; 
			cout << "|| Customer Details: ||" << endl;
			cout << "=======================" << endl; 
		  //cout << "check id: " << cust_list[0].get_customer_ID() << endl;
			cout << "Name: " << temp_name << endl; 
			cout << "Contact: " << temp_email << endl; 
	
				


			cout << endl;
			
			}
			
			
		}
		

	} 
				// Live rooms avaible board 
}
			cout << "=================================" << endl; 
			cout << "|| Live rooms available board: ||" << endl;
			cout << "=================================" << endl; 
		cout << "Luxury Rooms available: " << count_lux << endl;
		cout << "Deluxe Rooms available: " << count_dul << endl;
		cout << "Standard Rooms available: " << count_std << endl;
		cout << endl;
}

// Behaviour to add facilities to a room 
void hotel::room_facilities()
{
	// Showing the basic facilities
	cout << "Your current facilites are: " << endl;
	switch(cur_room){

		case 1:
		case 2:
		case 3: 
			rooms_lux->basic_facilities();
			cout << "4) Number of beds: " << rooms_lux->get_num_bed(1) << endl;
			cout << "5) Number of bathrooms: " << rooms_lux->get_num_bathrooms(1) << endl;
			break; 

		case 4:
		case 5:
		case 6:
		case 7:
			rooms_dul->basic_facilities();
			cout << "4) Number of beds: " << rooms_dul->get_num_bed(4) << endl;
			cout << "5) Number of bathrooms: " << rooms_dul->get_num_bathrooms(4) << endl;
			break; 


		case 8:
		case 9:
		case 10:
			rooms_std->basic_facilities();
			cout << "4) Number of beds: " << rooms_std->get_num_bed(8) << endl;
			cout << "5) Number of bathrooms: " << rooms_std->get_num_bathrooms(8) << endl;
			break; 
		
	}
	cout << endl;
	cout << "HOWEVER YOU CAN ADD ADVANCED FACILITIES LISTED BELOW:" << endl;

	// Adding advanced facilities to a room picked by the customer 


	switch(cur_room-1){

		case 0:
			rooms_lux[0].advanced_facilities();
			break;
		case 1:
			rooms_lux[1].advanced_facilities();
			break;
		case 2:
			rooms_lux[2].advanced_facilities();
			break;

		case 3:
			rooms_dul[0].advanced_facilities();
			break;
		case 4:
			rooms_dul[1].advanced_facilities();
			break;
		case 5: 
			rooms_dul[2].advanced_facilities();
			break;
		case 6:
			rooms_dul[3].advanced_facilities();
			break;

		case 7:
			rooms_std[0].advanced_facilities();
			break;
		case 8:
			rooms_std[1].advanced_facilities();
			break;
		case 9: 
			rooms_std[2].advanced_facilities();
			break;

	}

}

	
hotel::~hotel()
{



}