#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<sys/wait.h>
#include<process_copy.h>
int main(int argc,char**argv){
	int pronum;
	int blocksize;
	if(-1==check(argc,argv)){
		printf("error of argument");
		return 0;
		}else if(check(argc,argv)==0){
			pronum=10;
			}
			else{
				pronum=check(argc,argv);
				
				}
				if((blocksize=block_cur(argv[1],pronum))==-1){
					return -1;
					}
				if(-1==process_create(argv[1],argv[2],blocksize,pronum)){
					printf("create process failed \n");
					return -1;
					}
	while(1){
		process_wait();
		sleep(1);
		}
	return 0;
	}
