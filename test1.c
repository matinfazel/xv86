#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"

int main()
{
int child[5];
int inChild =-1;
for (int i=1;i<=5;i++){
    int par = getpid();
    child[i]=fork();
    if(child[i]==0){
    printf("Parent (pid : %d) creating child %d (pid: %d)",par,i,getpid());
    inChild=1;
    break;
    }
}


if (inChild == 1)
{
sleep(1000);

}
else {


    wait(NULL);
}
    return 0;
}