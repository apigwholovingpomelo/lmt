#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<sys/wait.h>
int process_create(char *src ,char*des,int blocksize,int pronum){
	int i;
	pid_t pid;
	int pos=0;
	char STR_POS[100];
	char STR_BLK[100];
	for(i=0;i<pronum;i++){
		pid=fork();
		if(pid>0)
		{
			
			}
			else if(pid==0){
				pos=i*blocksize;
				sprintf(STR_POS,"%d",pos);
				sprintf(STR_BLK,"%d",blocksize);
				printf("%s\n",src);
				execl("/home/lmt521zhy/lmt521zhy/Regex/Process/PROCESS_COPY/Mod/copy","copy",STR_POS,STR_BLK,src,des,NULL);
				break;
				
				}
		}
		return 0;
	}			 
