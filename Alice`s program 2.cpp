#include<math.h>
#include<stdio.h>
int main()
{
	double a,b,c,discriminant,root1,root2,realpart,imagpart;
	printf("Enter coeficients a,b and c:");
	scanf("%lf%lf%lf",&a,&b,&c);
	discriminant=b*b-4*a*c;
	//condition for real and different roots
	if(discriminant>0){
		root1=(-b+sqrt(discriminant))/(2*a);
		root2=(-b-sqrt(discriminant))/(2*a);
		printf("root1=%.2lf and root2=%.2lf",root1,root2);
	}
	//condition for real and equal roots 
	else if(discriminant==0){
		root1=root2=-b/(2*a);
		printf("root1=root2=%.2lf,",root1);
	}
		//if roots are not equal
		else{
			realpart=-b/(2*a);
			imagpart=sqrt(-discriminant)/(2*a);
			printf("root1=%.2lf+%.2lfl and root2=%.2f-%.2fl",realpart,imagpart,realpart,imagpart);
	}
	return 0;
}
