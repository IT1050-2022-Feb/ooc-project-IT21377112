class Manage     //Manage Class  //Association Class
{ 
	private:
			int memberId;
    	string Date; 
    	Tour*tur;    //As an object of Tour as attribute 
    	Admin*adm;   //As an object of Admin as attribute 
  
public :  
    	Manage(); 
    	Manage(int pMemberId, string D, Tour *T,Admin*A);      
    	Manage(int pMemberId, string D);       
    	void cancelRequest();       
    	void updateTour();       
    	void assingDate(); 
    	~Manage();   
};

