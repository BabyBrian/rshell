#include <iostream>
#include <string>
#include <cstdlib>
#include <iomanip>
#include <vector>
#include <stdio.h>
#include <sstream>
#include <errno.h>
#include <unistd.h>
#include <algorithm> 

using namespace std;

string removeComment(string content)
{

		//Look for # character and get the position
	if(content.find('#')!=string::npos)
			//Select only the command and exclude the comments
return content.substr(0,content.find('#'));

	//If no comments don' t do anything on the commands
else
return content;
}

vector <string> splitCommands(string content)
{
		vector <string> vectCom;
		string nextCommand;

	//Give the number of commands
		int numberCommands = count(content.begin(), content.end(), ';');

	//if matches found before the end of the command
		for (unsigned i=0; i<numberCommands; i++) //if matches found before the end of the command
			{
		nextCommand = content.substr(0, content.find(';'));
		int comm = nextCommand.length();
   		vectCom.push_back(nextCommand);
   		content = content.erase ( 0, comm+1);
  			}
  			
   				//read the last command if there is no ';'
  			if (content !="\0")
   			{
  			nextCommand = content.substr(0, string::npos);
	 		vectCom.push_back(nextCommand);
   			}
   		
    return vectCom;
}

	//Fonction for executing the commands in the terminal
void ExecCmd(string cmd)
{
	removeComment(cmd);	  //Erase the comments
	system(cmd.c_str());  //Execute commands
}

int main()
{
	//Variables declarations
std::string cmd;


	//Definition of items for username
char username[20];
char hostname[20];

getlogin_r(username, sizeof(username)-1);
gethostname(hostname, sizeof(hostname)-1);
	
	//Declaration of the vector
vector<string> vectCommands; 

	//Introduction
cout << "Homework 1" << endl;
cout << "Students: MADRE Denis ADAM Brian" << endl;
cout << "Please enter a command in the terminal :" << endl;

	//Definition of the exit command
while(cmd!="exit")
{

	//Take commands from the user (username & host)
cout << "[" << username << "@" << hostname << " ~]$ ";
std::getline(std::cin, cmd);
cout << "Commande entered : " << cmd << endl;
cout << " " << endl;

	//Call the function to deal with single/multiple commands
vectCommands=splitCommands(cmd); 

for (vector<string>::iterator it = vectCommands.begin(); it != vectCommands.end(); it++)
 ExecCmd(*it); //Execute each command from the vector
}
	return 0;
}
