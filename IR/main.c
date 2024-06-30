#include<at89x52.h>
int n=1;
	int i;
main()
{
	
	while(1)
	{
		if (P3_2==0 && n==1)
		{
			P2=0; n=1-n;
			for(i=0; i<1000;i++)
			{}
		}
		else
			if(P3_2==0 && n==0)
		{
			P2=0xff; n=1-n;
			for(i=0; i<1000;i++)
			{}
		}
	}
}