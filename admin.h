//Uni-directional association between Admin Class and the Apartment Class 
//Uni-directional association between Admin Class and the Report Class 
//Manage Class is the Association class between Admin Class and the Tour Class  
class Admin //Admin Class 
{   
private : 
    String userName;
    string  post;       
    string  password;      
    int staffId; 
    Report *Rpt; //An object of Report as attribute 
    Apartment *Ppt; //An object of Apartment as attribute    
public: 
    Admin(); 
    Admin(string pUserName,string pPost,int pStaffId,string pPassword,Report*R, Apartment *P);      
    Admin(string pUserName,string pPost,int pStaffId,string pPassword);
    void addApartment();       
    void removeApartment();       
    void updateTourSchedule(); 
    ~Admin(); 
};
