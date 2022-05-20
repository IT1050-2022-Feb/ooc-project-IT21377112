#include "Admin.h"
#include <string>

Admin::Admin() { 
} 
Admin::Admin (string pUserName,string pPost,int pStaffId,string pPassword,Report *R,Apartment *P) { 
		userName=pUserName;     
		post=pPost;     
		password=pPassword;     
		taffId=pStaffId;   
    Rpt=R; 
    Ppt=P; 
}; 
void Admin::addApartment(){
  }  
void Admin::removeApartment() { 
  }  
void Admin::updateTourSchedule() { 
  } 
Admin::~Admin() { 
}
