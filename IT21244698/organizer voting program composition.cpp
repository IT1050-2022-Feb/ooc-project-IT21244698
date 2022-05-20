#include<iostream>
#include<cstring>

using namespace std;
//part class	
class votingProgram{
	
	private:
		int V_ID;
		char V_Name[50];
		int duration;
		char V_category[50];
	
	public:
		votingProgram();
		
		votingProgram(int id, const char name[], int Vduration, const char vcat[]){
			
			V_ID = id;
			strcpy(V_Name, name);
			duration = Vduration;
			strcpy(V_category, vcat);
		};
			
		void SetVotingProgramDetails(int id, const char name[], int duration, const char category[]);
		
		void DisplayVotingProgram();
		
		void shareDetails();
		
		~votingProgram(){
			cout<<"Delete Voting Program no: " << V_ID << endl;
		};
		
		
};


	
//whole class	
class Organizer{
	private:
		int Organizer_ID;
		char Oname[20];
		int Oage;
		Report *rpt;
		votingProgram *vot[3];
		
	public:
		Organizer(){
			vot[0] = new votingProgram(2001, "Best Singer award nomination", 25, "Music");
			vot[1] = new votingProgram(2002, "Best Actor award nomination", 24, "Drama");
			vot[2] = new votingProgram(2003, "Best inovator in year", 15, "science");
			
		};	
    
    Organizer(int ID, const char name[], int age);
      
		~Organizer(){
			cout<<"Organizer deleted: " <<endl;
			for(int i = 0; i < 3; i++){
				delete vot[i];
			}
		};
};

int main(void){
	
	Organizer *org1 = new Organizer();
	
	delete org1;
}	
	


