#include<iostream>
#include<cstring>

using namespace std;

class Report{
	private:
		int Report_ID;
		char Report_Name[20];
		char Report_Type[10];
		
	public:
		Report();
		
		Report(int id, const char name[], const char type[]){
			Report_ID = id;
			strcpy(Report_Name, name);
			strcpy(Report_Type, type);
		};
		
		void SetReportDetails(int vid, int nid, const char type[] );
		
		void GenerateReport();
		
		~Report(){
			cout<<"Report delete"<<endl;
		};
};
class Nominee
{
	private :
		int nominee_Id;
		char nominee_Name[50];
		int age;
    Report *rpt;
		
	public :
		Nominee(int id ,const char nName[] , int nAge, Report *r)
		
		{
			nominee_Id = id;
			strcpy(nominee_Name,nName);
			age = nAge;
            rpt = r;
		};
		~Nominee()
		{
			cout<<"Nominee Deleted : "<<nominee_Id<<endl;
		}
};
nt main(void){
	
	Report *r = new Report(1001, "Nominee Information", "nominee");
	
	Organizer *o = new Organizer(101, "Jananja osham", 21, r);
	
	delete r;
	
	delete o;
	
	return 0;
	
}
