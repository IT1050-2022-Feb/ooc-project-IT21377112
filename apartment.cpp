#include "Apartment.h"

Apartment::Apartment() { 
} 
Apartment::Apartment(string papartmentType, int pID) { 
apartmentType=papartmentType;     
apartmentID=pID; 

//Call the constructor "Payment" 
pay1 = new Payment(payID,pID);  //payID=paymentID & pID=apartmentID 
}  
void Apartment::displayApartmentDetails() { 
}  
void Apartment::addApartment() { 
} 
Void Apartment::removeApartment() { 
} 
{
Apartment::~Apartment() {   
}
