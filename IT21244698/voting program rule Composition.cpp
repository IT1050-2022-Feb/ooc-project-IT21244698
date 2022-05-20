#include<iostream>
#include<cstring>

using namespace std;

class Rule{
	private:
		int Rule_ID;
		char Rule_Name[50];
		char Rule_Description[60];
	
	public:
		Rule();
		
		Rule(int id, const char rname[], const char rdes[]){
			Rule_ID = id;
			strcpy(Rule_Name, rname);
			strcpy(Rule_Description, rdes);	
		};
		
		void SetRuleDetails(int rid,  const char rname[], const char rdes[]);
		
		~Rule(){
			cout<<"Rule Deleted : "<< Rule_ID <<endl; 
		};	
};

class votingProgram{
	
	private:
		int V_ID;
		char V_Name[20];
		int duration;
		char V_category[50];
		Rule *rule[3];
	
	public:
		votingProgram(){
			rule[0] = new Rule(1000, "voting Rule", "Voter should cast a vote at a time");
			rule[1] = new Rule(1001, "Organizer Rule","Organize can make only one voting program");
			rule[2] = new Rule(1002, "User Ban Rule", "If any user violate those rules system admin can ban users anytime");
		};
			
		void SetVotingProgramDetails(int id, const char name[], int duration, const char category[]);
		
		void DisplayVotingProgram();
		
		void shareDetails();
		
		~votingProgram(){
			cout << "Shutting down voting program"<<endl;
			
			for(int i = 0; i < 3; i++){
				delete rule[i];
			}
		};
		
};

int main(void){
	
	votingProgram *v1 = new votingProgram();
	
	delete v1;
	
	return 0;
}


