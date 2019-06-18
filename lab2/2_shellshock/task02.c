#include <stdio.h>

int main() { 
	setuid(geteuid());  
	system("/bin/ls -l"); 
}
