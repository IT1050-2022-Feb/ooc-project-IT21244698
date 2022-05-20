#include <iostream>
#include <cstring>

class Report {
private:
	int Report_ID;
	char Report_Name[20];
	char Report_Type[50];

public:
	Report();

	Report(int id, const char rName[], const char rType[])
	{
		Report_ID = id;
		strcpy(Report_Name, rName);
		strcpy(Report_Type, rType);
	};
	void setReportDetails(int vid, const char name[]);

	void GenerateReport();

	~Report()
	{
		cout << "Report delete" << endl;
	};
};

class Organizer
{
private:
	int Organizer_ID;
	char Oname[30];
	int Oage;
	Report *rpt;
public:

  Organizer();

	Organizer(int ID, const char name[], int age, Report *re)
	{
		Organizer_ID = ID;
		strcpy(Oname, name);
		Oage = age;
		rpt = re;
	};

	~Organizer()
	{
		cout << "Organizer delete" << endl;
	};

};

int main()
{
	Report *re = new Report(1212, "Info", "Organizer");
	Organizer *o = new Organizer(121, "Sandaruwan Perera", 30, re);
	delete re;
	delete o;

	return 0;
}