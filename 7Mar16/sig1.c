/*program to get and handle signal from other process
and the do whatever process we wanna to do.
Here i modified code to kill the process by python program kill.py */

#include<stdio.h>
#include<signal.h>
#include<unistd.h>
#include<stdlib.h>
void sig_handler(int signo)
{
  if (signo == SIGTERM){
	printf("received SIGTERM\n");
	exit(EXIT_SUCCESS);
	}
}

int main(void)
{
  if (signal(SIGTERM, sig_handler) == SIG_ERR)
  printf("\ncan't catch SIGTERM\n");
  // A long long wait so that we can easily issue a signal to this process
  while(1) 
    sleep(1);
  return 0;
}
