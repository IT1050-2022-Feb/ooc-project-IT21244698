#include<iostream>
#include<cstring>

using namespace std;

//Rule

class Rule{
	private:
		int ruleid;
		char ruleName[20];
		char ruleDescription[50];
	
	public:
		
		Rule(int id, const char rname[], const char rdes[]){
			ruleid = id;
			strcpy(ruleName,rname);
			strcpy(ruleDescription, rdes);	
		}
		
		void SetRuleDetails(int rid, const char rname, const char rdes);
		
		~Rule(){
			cout<<"Deleted Rule : "<<ruleid<<endl; 
		}	
};
class votingProgram{
	
	private:
		int V_ID;
		char V_Name[20];
		int duration;
		char V_category[50];
		Rule *rule[2];
	
	public:
		votingProgram(){
			rule[0] = new Rule(1000, "Timing rule", "Voter should vote for the nominee before the deadline");
			rule[1] = new Rule(1001, "Baning users","if users violate any rules admin can ban them");
			
		};
			
		void SetVotingProgramDetails(int id, const char name, int duration, const char category);
		
		void DisplayVotingProgram();
		
		void shareDetails();
		
		~votingProgram(){
			cout << "Shutting down voting program"<<endl;
			
			for(int i = 0; i < 2; i++){
				delete rule[i];
			}
		};
		
};

int main(void){
	
	votingProgram *voting1 = new votingProgram();
	
	delete voting1;
	
	return 0;
}

