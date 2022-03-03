# include <iostream>
# include "room.h"
# include "deluxe_room.h"
# include "customer.h"
# include <string>
#include <cstdlib>
using namespace std; 

int main() {

  for (int i = 0; i < 6; i++) {
    cout << "Test " << i+1 << ":" << endl;
    deluxe_room delx_rm;
    delx_rm.set_cost(1);
    delx_rm.advanced_facilities();
    cout << endl;
  }
  
  return 0;
}
