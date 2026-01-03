// Semaphore Resource Allocation

#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <semaphore.h>
#include <unistd.h>

sem_t mutex;
int counter  = 0;
void* buffer (void* arg){
    sem_wait(&mutex);
    
    for(int i = 0; i < 1000; i++){
        counter++;
    }
    
    sem_post(&mutex);
}

int main(){
    pthread_t p, c;
    sem_init(&mutex, 0,1);
    pthread_create(&p, NULL, buffer, NULL);
    pthread_create(&c, NULL, buffer, NULL);
    
    pthread_join(p, NULL);
    pthread_join(c, NULL);
    
    printf("Res_allocated time: %d", counter);
    
    return 0;
}