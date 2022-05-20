#include <string>
#include "Member.h"

Member::Member() { 
} 
Member::Member(string pUsername, string pPassword, int ID, Apartment *p) { 
 
  username = pUsername;
  password = pPassword;
  memberID=ID;   
  aprtmnt = p; 
}  
void Member::manageProfile() {  
}  
void Member::requestTour() {      
} 
void viewApartment() {       
}  
void manageApartment() {     
} 
Member::~Member() { 
}
