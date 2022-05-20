#include<iostream>
#include<cstring>

using namespace std;

//Nominee

class Nominee
{
	private :
		int nominee_Id;
		char nominee_Name[50];
		int age;
		
	public :

    Nominee();

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
			nominee[0] = new Nominee(001 , "Kumara Sangakkara" , 55);
			nominee[1] = new Nominee(002 , "Mahela Jayawardhana", 48);
			nominee[2] = new Nominee(003 , "Lasith Malinga" , 40);
		};
			
		void SetVotingProgramDetails(int id, const char name[], int duration, const char category[]);
		
		void DisplayVotingProgram();
		
		void shareDetails();
		
		~votingProgram(){
			cout << "Shutting down voting program"<<endl;
			
			for(int x = 0; x < 3; x++){
				delete nominee[x];
			}
		}
		
};

int main(void){
	
	votingProgram *voting1 = new votingProgram();
	
	delete voting1;
	
	return 0;
}

