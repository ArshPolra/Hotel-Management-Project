# include <iostream>
# include "room.h"
# include "standard_room.h"
# include "customer.h"
# include <string>
#include <cstdlib>
using namespace std; 

int main() {

  for (int i = 0; i < 6; i++) {
    cout << "Test " << i+1 << ":" << endl;
    standard_room std_rm;
    std_rm.set_cost(1);
    std_rm.advanced_facilities();
    cout << endl;
  }
  
  return 0;
}
