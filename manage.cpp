#include "Manage.h"
#include <string>

Manage::Manage() { 
} 
Manage::Manage(int pMemberId,string D, Tour *T, Admin*A) 
{ 
			memberId=pMemberID;
			tur=T;
			adm=A; 
}  
void Manage::cancelRequest() { 
}  
void Manage::updateTour() { 
}  
void Manage::assingDate() {  
} 
 
Manage::~Manage()  
{}
