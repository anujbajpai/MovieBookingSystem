#include <iostream>

using namespace std;

class UserAccount {
  public :
    string userID;
    string password;
    vector<Booking> bookings;   
    
    Booking DoBooking();
    vector<Booking> GetBookings();
    void createUserAccount();
}
