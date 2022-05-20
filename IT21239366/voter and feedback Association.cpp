#include<iostream>
#include<cstring>
using namespace std;

class Feedback{
    private:
        int F_ID;
        char F_Description[50];
    public:
        Feedback();
        Feedback(int id, const char fdesc[] ){
            F_ID = id;
            strcpy(F_Description, fdesc);
        };
    void SetFeedbackDetails(int id, const char fdesc[]);

    void displayFeedback()

    ~Feedback(){
        cout<<"Give Feedback ="<<F_Description<<endl;
    };

       
};


class voter{
    private:
      int Voter_ID;
      char Name;
      int Age;
      char DOB
      Feedback *fdb;

    public:
      Voter(int pVoter_id, const char pName[], int pAge, char pDob, Feedback *fdb){
          Voter_ID = pVoter_id;
          strcpy(pName, Name);
          Age = pAge;
          fdb = f;
      };
      void setVoterDetails(int id, string vname, int vage const char vdob[]);

      void displayVoter()
      {
        cout << "voterID = " << Voter_ID << endl;
	 	cout << "voter Name = " << Name << endl;
        cout << "voter Age = " << Age << endl;
		cout << " Date Of Birth = " << DOB << endl;
          fdb->displayFeedback();
      }
    

};
int main()
{
    char ch
    Feedback *f=new Feedback(001, "Woow so easy to use");
    f->displayFeedback();
    cout << " **************************" << endl;
    Voter *v = new Voter(11, "Sithumina", 21, "2001.03.21", f);
	v->displayVoter();
	delete v;
	delete f;
	cin >> ch;
	return 0;
}
