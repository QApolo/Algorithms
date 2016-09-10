
#include <stdio.h>
#define SIZE 100
int nums[SIZE];

//return the position of the searched number, if it doesn't exist then it returns -1
//devuelve la posicion del numero buscado, si no existe entonces devuelve -1
int binarySearch(int n)
{
	if(nums[SIZE-1]<n)return -1;
	else if(nums[SIZE-1]==n)return SIZE-1;
	int l=0,r=SIZE-1,m=(l+r)/2;//(l+r)%2==0?
	int i=0;
	while(r>l)
		if(nums[m]==n)return m; //i++; if(nums[m]==n){printf("steps: %d\n",i);return m;}  ---<- commented line, it tells us the number of steps that the algorithm takes
		else if(nums[m]>n)r=m,m=(l+r)/2;
		else if(nums[m]<n)l=m,m=(l+r)/2;
	//printf("steps: %d\n",i++);
return -1;
}

int main()
{
	//fill the array from i+1 to the size of the array
	//llenamos el array desde i+1 hasta el tamaño del arreglo
	int i;
	for(i=0;i<SIZE;i++)
		i[nums]=i+1;
		
	//some trials
	printf("[%d]\n",binarySearch(7));
	printf("[%d]\n",binarySearch(nums[(SIZE-1)/2]));
	printf("[%d]\n",binarySearch(1));
	printf("[%d]\n",binarySearch(-4));
	printf("[%d]\n",binarySearch(SIZE));
	printf("[%d]\n",binarySearch(SIZE-1));
	printf("[%d]\n",binarySearch(SIZE+2));
	printf("\n\n[%d]=%d\n",SIZE-1,nums[SIZE-1]);
	
	/*
		printf("write any integer number");
		scanf("%d",&i);
		printf("[%d]=%d",i,binarySearch(i));
	*/
return 0;
}
