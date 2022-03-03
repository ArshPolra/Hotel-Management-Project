# include <iostream>
# include <string>
#include <cstdlib>
# include "hotel.h"
using namespace std; 

int main(){


int condition = false; 
hotel new_hotel;
string answer; 
new_hotel.set_rooms();
			cout << "===================================================" << endl; 
			cout << "|| Hello and wellcome to LONG LONG UNITED HOTEL: ||" << endl;
			cout << "||  STAY LONGG, PLEASURE LONGG, LONG LONG UNITED ||" << endl;
			cout << "===================================================" << endl; 
			cout << endl;

// looping to run the code untill the user types close 
while(condition != true){


	cout << "Type \"b\" to go to booking menu" << endl;
	cout << "Type \"co\" to go to checkout menu" << endl;
	cout << "Type \"in\" to go to final interface" << endl;
	cout << "Type \"close\" to end the program" << endl;
	cout << "Pick a menu: ";
	cin >> answer; 
	cout << endl;


		system("clear");	

	if(answer == "b"){

		if(new_hotel.hotel_full() == false){
			string ans; 
			cout << "Do you want to check-in a customer(type \"y\" for yes and \"n\" for no): ";
			cin >> ans; 
			cout << endl;


			if(ans == "y"){


			int *available_rooms = new_hotel.rooms_available();
			cout << "==================================" << endl; 
			cout << "|| There are 3 types of rooms : ||" << endl;
			cout << "==================================" << endl; 

			cout << "==========================================================================================================================================" << endl; 
			cout << "||				Luxury Room:				Deluxe Room:			Standard Room:			||" << endl;
			cout << "||Cost:				$1000					$500				$100				||" << endl;
			cout << "||Num beds: 			3					2				1				||" << endl;
			cout << "||Num bathrooms:		2					1				1				||" << endl;                                                      
			cout << "==========================================================================================================================================" << endl; 
			cout << endl;
			cout << "The facilities will be shown while booking a room" << endl;
			cout << endl;

			cout << "Available rooms: " << endl;

			for(int i = 0; i<10; i++){
				

				if(available_rooms[i] != 0){

					if(available_rooms[i] <= 3){

					cout << available_rooms[i] << " <------ Luxury Rooms" << endl;
			

				}else if(available_rooms[i] >= 4 && available_rooms[i] <= 7){

					cout << available_rooms[i] << " <------ Deluxe Rooms" << endl;
		

				}else if(available_rooms[i] > 7){

					cout << available_rooms[i] << " <------ Standard Rooms" << endl;
		

				}
			}
			}

			cout << endl; 

			new_hotel.checkin();
			cout << "Rooms available for your budget: " << endl;
			int *budget_available = new_hotel.budget_rooms();
			int ini_cout = 0; 
			for(int i = 0; i<10; i++){
				if(budget_available[i] != 0){
					cout << budget_available[i] << endl;
				}else{
					ini_cout++;
				}
			}

			

			cout << endl; 
 
			if(ini_cout == 10){

				cout << "Sorry but you are poor :(" << endl;
				cout << endl;

			}else{
			new_hotel.book_room();
			new_hotel.room_facilities();
			cout << endl;
		}
		}
		}else{

			cout << "hotel is full no more booking available" << endl;

		}

		}else{

			cout << "==========================" << endl; 
			cout << "|| Thanks for visiting: ||" << endl;
			cout << "==========================" << endl; 
			cout << endl;
		}
		if(answer == "co"){
				
			string ans; 
			cout << "Do you want to check-out a customer(type \"y\" for yes and \"n\" for no): ";
			cin >> ans; 
			cout << endl;
				if(ans == "y"){

					int temp_cust_id = 0;
					cout << "Please enter a customer id: ";
					cin >> temp_cust_id; 
					// cout << "Customer with ID: " << temp_cust_id << " has been checked out" << endl;  
					new_hotel.checkout(temp_cust_id);
					cout << endl;
				}else{

			cout << "==========================" << endl; 
			cout << "|| Thanks for visiting: ||" << endl;
			cout << "==========================" << endl; 
			cout << endl;

				}

	}else if(answer == "in"){

			new_hotel.booking_interface();
	}else if(answer == "close"){

			condition = true; 
	}
}

	return 0; 

}
