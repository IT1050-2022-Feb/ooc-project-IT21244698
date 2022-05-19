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
		
		void GenerateReport(int vid, int nid, int oid);
		
		~Report(){
			cout<<"Report delete"<<endl;
		};
};

class Organizer{
	private:
		int Organizer_ID;
		char Oname[20];
		int Oage;
		Report *rpt;
		
	public:
			Organizer(int ID, const char name[], int age, Report *r){
			Organizer_ID = ID;
			strcpy(Oname, name);
			Oage = age;
			rpt = r;
		
		};	
		
		~Organizer(){
			cout<<"Organizer delete"<<endl;
		};
};

int main(void){
	
	Report *r = new Report(1001, "Voter Information", "organizer");
	
	Organizer *o = new Organizer(101, "Beesara Sahan", 21, r);
	
	delete r;
	
	delete o;
	
	return 0;
	
}
