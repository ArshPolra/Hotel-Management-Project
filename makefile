# customer class test
Q1: customer.h customer.cpp main-cust.cpp
	  g++ customer.cpp main-cust.cpp -o t1 
	  ./t1 < input_cust.txt | diff - output_cust.txt


# room class test
Q2: luxury_room.cpp room.cpp luxury_room.h room.h main-room.cpp deluxe_room.cpp deluxe_room.h standard_room.h standard_room.cpp customer.cpp customer.h
	g++ luxury_room.cpp room.cpp main-room.cpp deluxe_room.cpp standard_room.cpp customer.cpp -o t2
	./t2 > output_room.txt

Q3: luxury_room.cpp luxury_room.h room.cpp room.h main-room.cpp
	g++ luxury_room.cpp room.cpp main-room.cpp -o t3
	./t3 

Q4: standard_room.cpp standard_room.h main-room.cpp room.cpp room.h customer.h customer.cpp
	g++ standard_room.cpp main-room.cpp customer.cpp room.cpp -o t4
	./t4

# hotel class test
Q5: hotel.cpp hotel.h main-hotel.cpp luxury_room.cpp room.cpp luxury_room.h room.h deluxe_room.cpp deluxe_room.h standard_room.h standard_room.cpp customer.cpp customer.h
	g++ hotel.cpp main-hotel.cpp luxury_room.cpp deluxe_room.cpp standard_room.cpp room.cpp customer.cpp -o t5
	./t5 < input_main-hotel.txt | diff - output_main-hotel.txt

Q6: hotel.cpp hotel.h main-hotel-2.cpp luxury_room.cpp room.cpp luxury_room.h room.h deluxe_room.cpp deluxe_room.h standard_room.h standard_room.cpp customer.cpp customer.h
	g++ hotel.cpp main-hotel-2.cpp luxury_room.cpp deluxe_room.cpp standard_room.cpp room.cpp customer.cpp -o t6
	./t6

# luxury class test
Q7: luxury_room.cpp luxury_room.h room.cpp room.h customer.cpp customer.h main-lux.cpp
	g++ luxury_room.cpp room.cpp main-lux.cpp customer.cpp -o t7
	./t7 < input_lux.txt | diff - output_lux.txt

# deluxe class test
Q8: deluxe_room.cpp deluxe_room.h room.cpp room.h customer.cpp customer.h main-delx.cpp
	g++ deluxe_room.cpp room.cpp main-delx.cpp customer.cpp -o t8
	./t8 < input_delx.txt | diff - output_delx.txt

# standard class test
Q9: standard_room.cpp standard_room.h room.cpp room.h customer.cpp customer.h main-std.cpp
	g++ standard_room.cpp room.cpp main-std.cpp customer.cpp -o t9
	./t9 < input_std.txt | diff - output_std.txt

# final program test
Q10: hotel.cpp hotel.h main-hotel-2-testing.cpp luxury_room.cpp room.cpp luxury_room.h room.h deluxe_room.cpp deluxe_room.h standard_room.h standard_room.cpp customer.cpp customer.h
	g++ hotel.cpp main-hotel-2-testing.cpp luxury_room.cpp deluxe_room.cpp standard_room.cpp room.cpp customer.cpp -o t10
	./t10 < input_main-hotel-2.txt | diff - output_main-hotel-2.txt
	
# final program
final_version: hotel.cpp hotel.h main-hotel-2.cpp luxury_room.cpp room.cpp luxury_room.h room.h deluxe_room.cpp deluxe_room.h standard_room.h standard_room.cpp customer.cpp customer.h
	g++ hotel.cpp main-hotel-2.cpp luxury_room.cpp deluxe_room.cpp standard_room.cpp room.cpp customer.cpp -o t12
	./t12
