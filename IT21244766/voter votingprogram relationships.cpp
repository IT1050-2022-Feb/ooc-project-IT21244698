#include<iostream>
#include<cstring>

using namespace std;

//voter

class Voter
{
	private:
		
		int voter_Id;
		char name[20];
		int age;
		char dob[10];
		
	public :
		Voter(int pVoter_Id,const char pName[],int pAge,const char pDob[]){
			voter_Id = pVoter_Id;
			strcpy(name,pName);
			age = pAge;
			strcpy(dob,pDob);
		};
		void setVoterDetails(int id , string vName , int vAge,char vDob);
		
		int getVoterid();
		~Voter(){
			cout<<" Voter destructor called!!"<<endl;
		};
			
};

class votingProgram {
	
	private:
		int V_ID;
		char V_Name[20];
		int duration;
		char V_category[50];
		Voter *voter[3];
	
	public:
		votingProgram(){
			voter[0] = new Voter(011 , "inosh" , 25,"2001.01.01");
			voter[1] = new Voter(012 , "Pamudith" ,30,"2010.12.31");
			voter[2] = new Voter(013 , "Madushi" , 20,"1965.01.02");
		};
		void SetVotingProgramDetails(int id, const char name[], int duration, const char category[]);
		
		void DisplayVotingProgram();
		
		void shareDetails();
		
		~votingProgram(){
			cout << "Shutting down voting program"<<endl;
			
			for(int i = 0; i < 3; i++){
				delete voter[i];
			}
		};
				
};

int main(void)
{
	votingProgram *voting1 = new votingProgram();
	
	delete voting1;
	
	Voter *voter1 = new Voter(011 , "inosh" , 25,"2001.01.01");
	Voter *voter2 = new Voter(012 , "Pamudith" ,30,"2010.12.31");
	Voter *voter3 = new Voter(013 , "Madushi" , 20,"1965.01.02");
	
	delete voter1;
	delete voter2;
	delete voter3;
	
	return 0;

	
}


