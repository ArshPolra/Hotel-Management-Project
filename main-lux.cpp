# include <iostream>
# include "room.h"
# include "luxury_room.h"
# include "customer.h"
# include <string>
#include <cstdlib>
using namespace std; 

int main() {

  for (int i = 0; i < 6; i++) {
    cout << "Test " << i+1 << ":" << endl;
    luxury_room lux_rm;
    lux_rm.set_cost(1);
    lux_rm.advanced_facilities();
    cout << endl;
  }
  
  return 0;
}
