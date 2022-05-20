#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<pthread.h>
void *ThreadFun( void *fun)
 {

	int msec;
	clock_t start = clock(), diff;
	
	int j=0;
	while(msec!=1000){
	    	diff = clock() - start;
		msec = diff * 1000 / CLOCKS_PER_SEC;
		j++;
	
	}
	



	printf("Number is equal to %d", j+1);
	return NULL;
	
    }  
 int main()   
 {  pthread_t thread_id;
    pthread_create(&thread_id, NULL, ThreadFun, NULL);
    pthread_join(thread_id, NULL);
    exit(0);
 }