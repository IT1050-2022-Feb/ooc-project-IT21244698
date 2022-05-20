#include<iostream>
#include<cstring>

#define SIZE 2 

using namespace std;


//part class
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
		
		void displayVoter(){
			cout<< "Voter ID : "<< voter_Id <<endl;
			cout<< "Name : " << name <<endl;
			cout<< "Age : " << age <<endl;
			cout<<"DOB : "	<< dob << endl;	
			cout << "************************" << endl;	
		}
		int getVoterid();
		~Voter(){
			cout<<"Deleting voter"<<endl;
		}
			
};

//whole class
class VotingProgram {
	
	private:
		int V_ID;
		char V_Name[20];
		int V_duration;
		char V_category[50];
		Voter *vot[SIZE];
	
	public:
		votingProgram();

		void addvoter(Voter*vot1, Voter*vot2){
			vot[0] = vot1;
			vot[1] = vot2;
		}
			 
		void SetVotingProgramDetails(int id, const char name[], int duration, const char category[]);
		
		void DisplayVotingProgram(){
			for(int i=0; i<SIZE; i++)
			vot[i]->displayVoter();
		}
		
		void shareDetails();
		
		~VotingProgram(){
			cout << "voting program delete"<<endl;
			
			  
		}
				
};

int main()
{
	Voter *vot1 = new Voter(021 , "Vidura" , 21,"2001.03.30");
	Voter *vot2 = new Voter(022 , "Madushi" ,21,"2001.11.03");
	 
	VotingProgram *vp1 = new VotingProgram();
	
	 vp1->addvoter(vot1, vot2);
	 vp1->DisplayVotingProgram();
	 
	 vot2->displayVoter();
	 vot1->displayVoter();
	 
	 delete vot1;
	 delete vot2;
	return 0;

	
}

