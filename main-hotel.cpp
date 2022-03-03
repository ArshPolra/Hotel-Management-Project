# include <iostream>
# include "hotel.h"
using namespace std; 

int main(){
  
for (int i = 0; i < 5; i++) {
cout << "Test " << i+1 << ":" << endl;
int condition = false; 
hotel new_hotel;
string answer; 
new_hotel.set_rooms();

while(condition != true){

	cout << "Type \"b\" to go to booking menu" << endl;
	cout << "Type \"co\" to go to checkout menu" << endl;
	cout << "Type \"in\" to go to final interface" << endl;
	cout << "Type \"close\" to end the program" << endl;
	cout << "Pick a menu: ";
	cin >> answer; 
	cout << endl;

	//system("clear");	

	if(answer == "b"){

		if(new_hotel.hotel_full() == false){
			string ans; 
			cout << "Do you want to check-in a customer(type \"y\" for yes and \"n\" for no): ";
			cin >> ans; 
			cout << endl;


			if(ans == "y"){


			int *available_rooms = new_hotel.rooms_available();
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

			cout << "Thanks for visiting " << endl << endl;
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
					cout << "Customer with ID: " << temp_cust_id << " has been checked out" << endl;  
					new_hotel.checkout(temp_cust_id);
					cout << endl;
				}else{

			cout << "Thanks for visiting " << endl << endl;

				}

	}else if(answer == "in"){

			new_hotel.booking_interface();
	}else if(answer == "close"){

			condition = true; 
	}
}
}

	return 0; 
}

