#include <iostream>

using namespace std;

class UserAccount {
  public :
    string userID;
    string password;
    vector<Booking> bookings;   
    
    UserAccount() {
      //Ask user for inputID
      //Ask user for password
    }
  
    Booking DoBooking();
    vector<Booking> GetBookings();
}
