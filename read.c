#include<stdio.h>
#include<unistd.h>
#include<sys/stat.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<string.h>

int main()
{
	char buf[1024];
	ssize_t s = read(0,buf,sizeof(buf));
	if (s > 0)
	{
		buf[s] = 0;
		write(1,buf,strlen(buf));
	}	
	return 0;
}
