#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<sys/wait.h>
int check(int argc,char* argv[]){
	int pronum;
	if(argc<3){
		return 1;
		}
	if(argv[3]!=0){
		pronum=atoi(argv[3]);
		if(pronum<=0||pronum>=100){
			return -1;
			}
		return pronum;
		}
	}
