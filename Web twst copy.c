#include <stdio.h>
int main() {
	double takas,takass,last;
	int sho, panc, bis,dos,pac,dui,ek,haf,quarter,pt,pp,pa,sifat;
	scanf("%lf", &takas);
	printf("NOTAS:\n");
	takass= (double) takas-(int)takas;
    sifat=takass*100;
	sho = (int) takas/100;
	takas = takas-(100*sho);
	panc = (int) takas/50;
	takas = takas-(50*panc);
	bis = (int) takas/20;
	takas = takas-(20*bis);
	dos = (int) takas/10;
	takas = takas-(10*dos);
	pac = (int) takas/5;
	takas = takas-(5*pac);
	dui = (int)takas/2;
	ek = (int)takas-(dui*2);

	haf = (int) sifat/50;
	takas = sifat-(50*haf);
    quarter = (int) takas/25;
	takas = takas-(25*quarter);
	pt = (int) takas/10;
	takas = takas-(10*pt);
	pp = (int) takas/5;
	takas = takas-(5*pp);
	pa = (int)takas;
	printf("%d nota(s) de R$ 100.00\n%d nota(s) de R$ 50.00\n%d nota(s) de R$ 20.00\n%d nota(s) de R$ 10.00\n%d nota(s) de R$ 5.00\n%d nota(s) de R$ 2.00\n", sho, panc, bis,dos,pac,dui);


	printf("MOEDAS:\n");
	printf("%d moeda(s) de R$ 1.00\n%d moeda(s) de R$ 0.50\n%d moeda(s) de R$ 0.25\n%d moeda(s) de R$ 0.10\n%d moeda(s) de R$ 0.05\n%d moeda(s) de R$ 0.01\n",ek,haf,quarter,pt,pp,pa);
	return 0;
}
