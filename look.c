#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX_JOBS 100

int compare1( const void* a, const void* b)
{
     return ( *(int*)a - *(int*)b );
}

void look(int trackTimes[], int n){
    
    int* lookTimes = malloc(n*sizeof(int));
    memcpy(lookTimes, trackTimes, sizeof(int)*n);
    
    int startValue = lookTimes[0];
    int i, startPoint, seek = 0;
    int j=0;
    qsort(lookTimes, n, sizeof(int), compare1);
    
    for(i = 0; i < n ;i++){
        if(lookTimes[i] == startValue){
            startPoint = i;
            break;
        }
    }
    
	for(i = startPoint; i < n - 1; i++) {
		seek += abs(lookTimes[i + 1] - lookTimes[i]);
		//printf("first seek: %d")
	}
	if(startPoint != 0){
    	seek += abs(lookTimes[n - 1] - lookTimes[startPoint -1]);
    	
    	for(j = startPoint - 1; j > 0; j--) {
    		seek += abs(lookTimes[j - 1] - lookTimes[j]);
    	}
	}

	printf("(Chad Rasmussen) LOOK Total Seek: %d\n", seek);
}

// int main(int argc, char *argv[]) {
//     FILE *fp;
//     int blocklist[MAX_JOBS];
//     int number;
//     int i = 0;
//     if (argc == 2){
//         fp = fopen(argv[1], "r");
//     }
//      else { 
//          fp = stdin;
//      }
//     while( fscanf(fp, "%d", &number) > 0)
//     {
//       blocklist[i] = number;
      
//         i++;
        
//     }
    
//     printf("Assignment 6: Block Access Algorithm");
//     printf("\nBy: Nikki Talley, Chad Rasmussen and Josh Chevrier");
//     printf("\n");
//     //fcfs(blocklist, i);
//   // sstf(blocklist, i);
//     look(blocklist, i);
//   // cLook(blocklist, i);
//     return 0;
// }