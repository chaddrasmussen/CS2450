#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX_JOBS 100

int compare( const void* a, const void* b)
{
     return ( *(int*)a - *(int*)b );
}

void cLook(int trackTimes[], int n){
    
    int* cLookTimes = malloc(n*sizeof(int));
    memcpy(cLookTimes, trackTimes, sizeof(int)*n);
    int j = 0;
    int startValue = cLookTimes[0];
    int i, startPoint, seek = 0;
    
    qsort(cLookTimes, n, sizeof(int), compare);
    
    for(i = 0; i < n ;i++){
        if(cLookTimes[i] == startValue){
            startPoint = i;
            break;
        }
    }
    
	for(i = startPoint; i < n - 1; i++) {
		seek += abs(cLookTimes[i + 1] - cLookTimes[i]);
	}

	int lastIndex = n - 1;
	
	if(startValue != cLookTimes[0]) {
		seek += abs(cLookTimes[lastIndex] - cLookTimes[0]);
	}
	
	for(j = 0; j < startPoint - 1; j++) {
		seek += abs(cLookTimes[j + 1] - cLookTimes[j]);
	}

	printf("(Josh Chevrier) C-LOOK Total Seek: %d\n", seek);
}
