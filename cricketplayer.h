typedef struct cricket
{
	int jersyno;
	char players_name[20];
	int age;
	char team[20];
	int runs;
	int wickets;
	int matches;
	char role[20];
	
}cricket;
void storecricket(cricket*,int);
void displaycricket(cricket*,int);
void searchcricket(cricket*,int);
void updatecricket(cricket*,int);
void deletecricket(cricket*,int*);

