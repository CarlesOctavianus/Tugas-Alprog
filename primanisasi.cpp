#include<cstdio>

bool cekprima(int bilangan)
{
	bool prime= true;
	for(int i=2; i*i<=bilangan;i++)
	{
		
		if(bilangan % i == 0)
		{
			prime=false;
			break;
		}
	}
	return prime;
}

int main()
{
	int N;
	scanf("%d", &N );
	int primanya[100];
	int pangkatnya[100];
	 int temp=N;
	int counter =0;
	for(int i=2; i<=temp; i++)
	{
		
		if(cekprima(i)){
			int inipangkat=0;
			
			while(temp% i ==0)
			{
				inipangkat++;
				temp=temp/i;
			}
			
			pangkatnya[counter]=inipangkat;
			
			if(N%i==0)
			{
				primanya[counter]= i;
				counter++;
				
			}
		
		}
	}
	
	for(int i=0; i<counter; i++)
	{
		printf("%d", primanya[i]);
		if(pangkatnya[i]!= 1)
		{
			printf("^%d",pangkatnya[i]);
		}
		
		if(i!=counter-1)
		{
			printf(" x ");
		}
	}
	printf("\n");

}