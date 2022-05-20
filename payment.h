//Composition relationship between Apartment Class and Payment Class 
//When the Apartment Class deleted, Payment Class will be deleted 
class Payment //Payment class  //Part class for Apartment Class   
{
  private :       
    int paymentID;         
    int apartmentID; 
  public: 
        Payment(); 
        Payment(int ppaymentID, int papartmentID);          void confirmPayment(); 
        ~Payment(); 
};
