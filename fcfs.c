#include<stdio.h>
#include<stdlib.h>
// #include "clook.c"
// #include "look.c"
// #include "sstf.c"

#define MAX_JOBS 100

void fcfs(int num[], int n){
    int i, diff;
    int seek = 0;
    for(i=0;i<n-1;i++)
    {
        diff=abs(num[i+1]-num[i]);
        seek+=diff;
    }
    printf("\n(Nikki Talley) FCFS Total Seek: %d\t\n",seek);
}

int main(int argc, char *argv[]) {
    FILE *fp;
    int blocklist[MAX_JOBS];
    int number;
    int i = 0;
    if (argc == 2){
        fp = fopen(argv[1], "r");
    }
     else { 
         fp = stdin;
     }
    while( fscanf(fp, "%d", &number) > 0)
    {
      blocklist[i] = number;
      
        i++;
        
    }
    
    printf("Assignment 6: Block Access Algorithm");
    printf("\nBy: Nikki Talley, Chad Rasmussen and Josh Chevrier");
    printf("\n");
    fcfs(blocklist, i);
    sstf(blocklist, i);
    look(blocklist, i);
    cLook(blocklist, i);
     return 0;
 }