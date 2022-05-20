#include<iostream>
#include<cstring>

using namespace std;

//Organizer

class Organizer
{
	private :
		int organizer_id;
		char oName[20];
		int oAge;
			
	public :

    Organizer();
    
		Organizer(int id , const char name[], int age)
		{
			organizer_id = id;
			strcpy(oName,name);
			oAge = age;
			
		}
		
		~Organizer()
		{
			cout<<"Organizer Deleted : "<<organizer_id<<endl;
		}
				
};

class votingProgram {
	
	private:
		int V_ID;
		char V_Name[20];
		int duration;
		char V_category[50];
		Organizer *organizer[3];
	
	public:
		votingProgram(){
			organizer[0] = new Organizer(100 , "inosh" , 25);
			organizer[1] = new Organizer(101, "Pamudith" ,30);
			organizer[2] = new Organizer(102 , "Madushi" , 20);
		}
		void SetVotingProgramDetails(int id, const char name[], int duration, const char category[]);
		
		void DisplayVotingProgram();
		
		void shareDetails();
		
		~votingProgram(){
			cout << "Shutting down voting program"<<endl;
			
			for(int i = 0; i < 3; i++){
				delete organizer[i];
			}
		}
		
		
};

int main(void){
	
	votingProgram *v1 = new votingProgram();
	
	delete v1;
	
	return 0;
}


