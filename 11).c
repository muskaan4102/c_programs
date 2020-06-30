#include<stdio.h>
/*Set 2:Finding Aggregate and Percentage of the marks of a student*/
int main()
{
	int eng,math,comp,evs,feee,agg;
	float percentage;
	printf("\t Enter marks in English: ");
	scanf("%d",&eng );
	printf("\t Enter marks in Math: ");
	scanf("%d",&math );
	printf("\t Enter marks in Computer: ");
	scanf("%d",&comp );
	printf("\t Enter marks in EVS: ");
	scanf("%d",&evs );
	printf("\t Enter marks in FEEE: ");
	scanf("%d",&feee );
	agg = eng+math+comp+evs+feee;
	printf("\tAggregate Marks in all subjects: %d",agg );
	percentage = agg*(100.0/500.0);
	printf("\tPercentage in all five subjects:%f% ",percentage );
	return 0;
}	
	