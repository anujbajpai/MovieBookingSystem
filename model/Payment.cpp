#include <iostream>

using namepsace std;

class Payment {
  public:
    int paymentID;
    int amount;
    PAYMENTMODE mode;
    UserAccount user;
    Date paymentDate;
    PAYMENTSTATUS paymentStatus;
    
    void makePayment();
    
}
