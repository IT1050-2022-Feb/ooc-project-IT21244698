#include <iostream> 
#include <cstring>
using namespace std;


class Report
{
	private:
		int Report_ID;
		char Report_Name[20];
		char Report_Type[20];
	public:
		Report();
		
		Report(int id, const char name[], const char type[])
		{
			Report_ID = id ;
		    strcpy(Report_Name,name);
		    strcpy(Report_Type,type);
		}
		
		 void setReportdetails(int id, char name, char type);		
	 
		void generateReport()
		{
			cout << " Report ID  = " << Report_ID << endl;
			cout << "Report Name  = " << Report_Name << endl;
			cout << "Report type = 	" << Report_Type << endl;
				}

    ~Report(){
      cout << "Report deleted" << endl;
    }
};
 
class Voter
{
   private:

int Voter_ID;
string Name;
int Age;
char DOB[20];
   Report *re;
   	 
   public:  
    Voter (int pVoter_id, string pName, int pAge, const char pDob[], Report *r) 
   	{  
		Voter_ID = pVoter_id;
		Name = pName;
		Age = pAge;
		strcpy(DOB,pDob);
   		re = r;
   	}

    void setVoterdetails( int ID, string vname, int vage, const char vdob[]);		

   	void displayVoter()
	{
		cout << "voterID = " << Voter_ID << endl;
	 	cout << "voter Name = " << Name << endl;
		cout << "voter Age = " << Age << endl;
		cout << " Date Of Birth = " << DOB << endl;
		re->generateReport();
	}   
};



int main()
{
	char ch;
	Report *r = new Report(005, "Voter Registration", "Voter details");
	r->generateReport();
	cout << " **************************" << endl;
	Voter *v = new Voter(52, "Devin", 21, "2001.05.07", r);
	v->displayVoter();
	delete v;
	delete r;
	cin >> ch;
	return 0;
}

