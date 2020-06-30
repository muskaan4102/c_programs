#include<stdio.h>
/*Set 2:Finding The total no.of illiterate men and women*/
int main()
{
    int popmen,popwomen,ttlitpop,poplitmen,poplitwomen,illimen,illiwomen;
	int pop = 80000;
	
    //popmen = population of men
	popmen= (pop*52)/100;
	//popwomen=women population
	popwomen = pop - popmen;
	//ttlitpop=total literate population
	ttlitpop = (pop*48)/100;
	//poplitmen=literate men population
	poplitmen = (pop*35)/100;
	//illimen = illiterate men
	illimen = ttlitpop - poplitmen;
	//illiwomen = illiterate women
	illiwomen = popwomen - (ttlitpop - popmen);
	printf("\tThe illiterate men are %d, illiterate women are %d",illimen,illiwomen );
	return 0;
}