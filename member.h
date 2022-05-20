//Uni-directional association between Member Class and the Apartment Class 
 class Member //Member Class 
{  
 private:
		string username;
    string password;
    int memberID; 
    Apartment *aprtmnt; //An object of Apartment as attribute 
 public: 
    Member(); 
    Member(string pUsername, string pPassword, int ID); 
    Member(string pUsername, string pPassword, int ID, Apartment *p);      
   
    void manageProfile();       
    void requestTour();       
    void viewApartment();      
    void manageApartment(); 
    ~Member();
};
