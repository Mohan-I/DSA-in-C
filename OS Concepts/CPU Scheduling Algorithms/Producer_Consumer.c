#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <semaphore.h>
#include <unistd.h>

#define SIZE 5

int buffer[SIZE];
int p = 0; // number of items currently in buffer

sem_t mutex, empty, full;

void* add_item(void* arg) {

    sem_wait(&empty);   // wait for empty slot
    sem_wait(&mutex);   // enter critical section

    int element;
    printf("\nEnter Item To Produce: ");
    scanf("%d", &element);

    buffer[p] = element; // insert at top
    p++;

    printf("Produced: %d\n", element);

    sem_post(&mutex);   // leave critical section
    sem_post(&full);    // one more full slot

    return NULL;
}

void* remove_item(void* arg) {

    sem_wait(&full);    // wait if buffer empty
    sem_wait(&mutex);   // enter critical section

    p--;                // move index down
    int item = buffer[p];
    buffer[p] = 0;

    printf("Consumed: %d\n", item);

    sem_post(&mutex);   // leave critical section
    sem_post(&empty);   // one more empty slot

    return NULL;
}

void show_buffer() {
    printf("\nBuffer: ");
    if (p == 0) {
        printf("[ empty ]");
    } else {
        for (int i = 0; i < p; i++) {
            printf("[%d] ", buffer[i]);
        }
    }
    printf("\n");
}

int main() {

    pthread_t producer, consumer;

    sem_init(&mutex, 0, 1);
    sem_init(&empty, 0, SIZE); // SIZE empty slots initially
    sem_init(&full, 0, 0);     // 0 full slots initially

    int choice;

    while (1) {
        printf("\n--- Producer Consumer Menu ---\n");
        printf("1. Produce\n");
        printf("2. Consume\n");
        printf("3. Show Buffer\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                pthread_create(&producer, NULL, add_item, NULL);
                pthread_join(producer, NULL);
                break;

            case 2:
                pthread_create(&consumer, NULL, remove_item, NULL);
                pthread_join(consumer, NULL);
                break;

            case 3:
                show_buffer();
                break;

            case 4:
                exit(0);

            default:
                printf("Invalid choice\n");
        }
    }

    return 0;
}
