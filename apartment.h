class apartment  //Apartment class //Whole class for Payment Class 
{  
private :       
  string apartmentType;
  int apartmentID;
  Payment *pay1;    
  int payID; 
public: 
  Apartment(); 
  Apartment(string papartmentType, int pID);
  Apartment(int payID, int pID);       
  void displayApartmentDetails();      
  void addApartment();      
  void removeApartment();      
  ~Apartment(); 
};
