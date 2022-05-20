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

	void GenerateReport();

	~Report()
	{
		cout << "Report delete" << endl;
	};
};

class nominee
{
private:
	int Nominee_ID;
	char Nominee_Name;
	int Age;
	Report *r;

public:

  Nominee();

	Nominee(int nID, char name, int Nage, Report *re)
	{
		Nominee_ID = nID;
		strcpy(Nominee_Name, name);
		Age = Nage;
		r = re;
	}

  ~Nominee(){
    cout << "Nominee Deleted" << endl;
  }
};
int main()
{
	char x;
	Report *r = new Report(222, "Nominee reg", "Nominee details");
	cout << " " << endl;
	Nominee *n = new Nominee("Pasindu", "23", r);
	delete n;
	delete r;
	cin >> x;

	return 0;
}