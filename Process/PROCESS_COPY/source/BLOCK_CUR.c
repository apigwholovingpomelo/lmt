#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<sys/wait.h>


int block_cur(char*src,int pronum){
	int fd,filesize;
	if((fd=open(src,O_RDONLY))==-1){
		perror("cutting open failed");
	return -1;
		}
	if((filesize=lseek(fd,0,SEEK_END))==-1)
	{
		perror("filesize failed");
		close(fd);
		return -1;
	}
	int blocksize;
	if(filesize%pronum==0){
		blocksize=filesize/pronum;
		
		}
		else{
			blocksize=filesize/pronum+1;
			}
			close(fd);
			printf("blocksize %d\n",blocksize);
			return blocksize;
	}
