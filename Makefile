assn6: fcfs.o sstf.o look.o cLook.o
	gcc -o assn6 fcfs.o sstf.o look.o cLook.o
	
fcfs: fcfs.c 
	gcc -g -Wall -Werror -o fcfs fcfs.c

sstf: sstf.c 
	gcc -g -Wall -Werror -o sstf sstf.c
	
look: look.c 
	gcc -g -Wall -Werror -o look look.c
		
cLook: cLook.c 
	gcc -g -Wall -Werror -o cLook cLook.c
# blockscheduler: fcfs.o sstf.o look.o clook.o
# 	gcc -o blockscheduler fcfs.o sstf.o look.o clook.o
	
# fcfs: fcfs.c 
# 	gcc -g -Wall -Werror -o fcfs fcfs.c
	
# sstf: sstf.c 
# 	gcc -g -Wall -Werror -o sstf sstf.c
	
# look: look.c 
# 	gcc -g -Wall -Werror -o look look.c
		
# clook: clook.c 
# 	gcc -g -Wall -Werror -o clook clook.c
