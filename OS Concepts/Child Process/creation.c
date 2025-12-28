// 1 Write a program to create a child process using fork() and display the process IDs of the parent and child. Observe the use of getpid() and getppid(). 

#include <stdio.h>
#include <unistd.h>

int main(){
    pid_t pid;
    pid = fork();

    if(pid < 0){
        printf("The Child Creation Has Been Failed !");
        return 1;
    } 
    else if(pid == 0){
        printf(" # Child Process :");
        printf(" Parent PID : %d \n", getppid());
        printf(" Child PID : %d \n", getpid());
    }
    else{
        printf(" # Parent Process :");
        printf(" Parent PID : %d \n", getppid());
        printf(" Child PID : %d \n", pid);
    }   
    return 0;
}