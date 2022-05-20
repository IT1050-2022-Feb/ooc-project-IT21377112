#include <iostream>
#include "Manage.h"
#include "Admin.h"
#include "Tour.h"
#include "Member.h"
#include "apartment.h"
#include "Report.h"
#include "Payment.h"
Using namespace std;
#include <string>
int main() { 
 
     Member *mbr1 = new Member("Sahan", "Sahan@123", 456);// Sahan = Username ,Sahan@123 = Password & 456 = Member ID  
     mbr1->viewApartment();   
     mbr1->manageProfile();  
     mbr1->manageApartment();   
     mbr1->requestTour(); 
     
     Apartment typ1("CornerApartment" , 12); // CornerApartment = Apartment Type & 12 = Apartment ID   
     typ1.displayApartmentDetails();   
     typ1.addApartment();   
     typ1.removeApartment(); 
     
    Admin adm1("Nimesh", "Manager", 202 , "Nim@123"); // Nimesh = Username , Manager = Post , 202 = Staff ID & Nim@123 = Password   adm1.updateTourSchedule();   
    adm1.addApartment();   
    adm1.removeApartment(); 
     
    Payment pay1(002, 67); // 002 = Payment ID & 67 = Apartment ID   pay1.confirmPayment(); 
     
    Report *rpt1; 
     rpt1->generateReport(); 
     
    Tour tr(100, 876); // 100 = Tour ID & 876 = Member ID  
    tr.viewSchedule(); 
     
    Manage mng1(100, "13/10/2020"); // 100 = Tour ID & 13/10/2020 = Date   mng1.cancelRequest();   
    mng1.updateTour();   
    mng1.assingDate();  
    delete mbr1;   
    delete rpt1; 
 
return 0; 
} 
