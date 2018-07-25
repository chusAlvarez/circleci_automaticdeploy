#include <iostream>
#include <signal.h>
#include <unistd.h>

using namespace std;

bool runserver = true;
void sig_handler (int signum) 
{ 
  runserver = false;
}
//UTILITY FUNCTIONS

int main(int argc, char **argv)
{
   
   //Handlers to stop the server
   
   signal (SIGINT, sig_handler);
   signal (SIGHUP, sig_handler);
   signal (SIGTERM, sig_handler);
  
   //Now run until a signal stop us....
   cout << "Run..." << endl;
   while(runserver)
   {
     	sleep(60); //We wait between calls....
   	cout << "Repeat..." << endl;
   }
   cout << "End..." << endl;
    return 0;
}
