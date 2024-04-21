#include<stdio.h>
#include<fcntl.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<unistd.h>
#include<stdlib.h>
int main(int argc ,char*argv[]){
	char* src=argv[3];
	char* des =argv[4];
	int pos=atoi(argv[1]);
	int blocksize =(atoi(argv[2])); 
	printf("%d\n",blocksize);
	if(access(src,F_OK)==-1){
		perror("access failed");
		return -1;
		}
		int fd1,fd2;
	char buf[blocksize];
	printf("%s\n",src);
	fd1=open(src,O_RDONLY);
	fd2=open(des,O_WRONLY|O_CREAT,0664);
	lseek(fd1,pos,SEEK_SET);
	lseek(fd2,pos,SEEK_SET);
	int len=read(fd1,buf,sizeof(buf));
	printf("当前读取位置%d 每次所读文件大小%d  当前进程id%d\n",pos,blocksize,getpid());
	write(fd2,buf,len);
	close(fd1);
	close(fd2);
	return 1;

	
	}
