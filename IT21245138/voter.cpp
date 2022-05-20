#include <iostream>
#include <cstring>
using namespace std;

class Report
{
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

	void GenerateReport(int vid, int Nid, int oid);

	~Report()
	{
		cout<< "Report delete" << endl;
	};
};

class voter
{
private:
	int Voter_ID;
	string Name;
	int Age;
	char DOB[10];
	Report * r;

public:
	Voter(int vID, string vName, int vage, const char vdob[], Report *re)
	{
		Voter_ID = vID;
		Name = vName;
		Age = vage;
		strcpy(DOB, vdob);
		r = re;
	}

	void displayVoter()
	{
		cout << "voterId = " << Voter_ID << endl;
		cout << "voter Name=" << Name << endl;
		cout << "voter age:" << Age << endl;
		cout << "date of birth:" << DOB << endl;

		r->generateReport();
	}
};
int main()
{
	char m;
	Report *re = new Report(111, "Voter Reistration", "Voter details");
	r->generateReport();
	cout << " " << endl;
	Voter *v = new Voter(22, "Isuru", "2005.05.05", r);
	v->displayVoter();
	delete v;
	delete r;
	cin >> m;


	return 0;
}