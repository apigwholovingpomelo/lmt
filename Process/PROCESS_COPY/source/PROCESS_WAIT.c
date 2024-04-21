#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<sys/wait.h>
int process_wait(void){
	
	
		int zpid=waitpid(-1,NULL,WNOHANG);
		return zpid;
	}
