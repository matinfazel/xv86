#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"


int main()
{

int child;
int inChild=-1;
int par = getpid();
for (int i=0;i<5;i++){

    child = fork();
    if(child==0){
    printf(0,"Parent (pid %d) creating child %d (pid: %d)\n",par,i,getpid());
    inChild=1;
    break;
    }
}

    int result = 5;
if (inChild == 1)
{
printf(0,"Child (pid: %d) created\n",getpid());

sleep(100);

     for (int i=0;i<20000000000;i++)
     {

         result = i - result +1000 *82- 43;
     }
}
else {

for(int i=0;i<5;i++){
wait();
}

}

exit();
}