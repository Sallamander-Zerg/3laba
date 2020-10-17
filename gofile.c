#include<apue.h>
#include<dirent.h>
int main (int argc,char*argv[])
{
DIR   *dp;
struct direct *dirp;
if(argc !=2)
err_quit("использование: ls имя_каталога");
if((dp = opendir(argv[1]))==NULL)
err_quit("невозможно открыть %s",argv[1]);
while((dirp=readdir(dp))!=NULL)
printf("%s\n",dirp->d_name);
closedir(dp);
exit(0);
}
