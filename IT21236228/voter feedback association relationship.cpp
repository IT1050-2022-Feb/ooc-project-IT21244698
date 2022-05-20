 #include <iostream> 
#include <cstring>
using namespace std;


class Feedback
{
	private:
		int F_ID;
		char F_Description[20];
	public:
		Feedback();
		 
		 Feedback(int id, const char desc[])
		
		{
			F_ID = id ;
		    strcpy(F_Description,desc);
		}
		
		void setFeedbackdetails(int id, const char desc[]);	
		
		void displayFeedback()
		{
			cout << " Feedback ID  = " << F_ID << endl;
			cout << "Feedback  = " << F_Description << endl;
		}
};
		 


class Voter
{
   private:

int Voter_ID;
string Name;
int Age;
char DOB[20];
Feedback *fd;
   	 
   public:  
    Voter (int pVoter_id, string pName, int page, const char pDob[], Feedback *f) 
   	{  
		Voter_ID = pVoter_id;
		Name = pName;
		Age = page;
		strcpy(DOB,pDob);
   		fd = f;
   	} 

	void setVoterdetails(int id, string vname, int vage, const char vdob[]);	

   	void displayVoter()
	{
		cout << "voterID = " << Voter_ID << endl;
	 	cout << "voter Name = " << Name << endl;
		cout << "voter Age = " << Age << endl;
		cout << " Date Of Birth = " << DOB << endl;
		fd->displayFeedback();
	}  

  ~Voter(){
    cout<<"Voter deleted"<<"endl";
  };

};



int main()
{
	char ch;
	Feedback *f = new Feedback(001, "great experience");
	f->displayFeedback();
	cout << " **************************" << endl;
	Voter *v = new Voter(29, "Kamal", 21, "2001.02.02", f);
	v->displayVoter();
	delete v;
	delete f;
	cin >> ch;
	return 0;
}

