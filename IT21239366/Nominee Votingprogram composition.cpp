#include<iostream>
#include<cstring>

using namespace std;



class Nominee
{
	private :
		int nominee_Id;
		char nominee_Name[50];
		int age;
		
	public :
		Nominee(int id ,const char nName[] , int nAge)
		
		{
			nominee_Id = id;
			strcpy(nominee_Name,nName);
			age = nAge;
		}
		~Nominee()
		{
			cout<<"Nominee Deleted : "<<nominee_Id<<endl;
		}
			
};
class votingProgram{
	
	private:
		int V_ID;
		char V_Name[20];
		int duration;
		char V_category[50];
		Nominee *nominee[3];
	
	public:
		votingProgram(){
			nominee[0] = new Nominee(1000, "Shantha Bandara" 11);
			nominee[1] = new Nominee(1001, "Dasun praboda", 23);
			nominee[2] = new Nominee(1002, "Upul silva", 22);
		};
			
		void SetVotingProgramDetails(int id, const char name[], int duration, const char category[]);
		
		void DisplayVotingProgram();
		
		void shareDetails();
		
		~votingProgram(){
			cout << "Shutting down voting program"<<endl;
			
			for(int i = 0; i < 3; i++){
				delete nominee[i];
			}
		};
    
		
};

int main(void){
	
	votingProgram *voting1 = new votingProgram();
	
	delete voting1;
	
	return 0;
}
