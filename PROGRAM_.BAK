#include<stdio.h>
#include<conio.h>

void main(){
	int phy, chem, bio, math, comp;
	float per;
	//input marks of five subjects from user
	clrscr();
	printf("Enter Five Subject marks:");
	scanf("%d %d %d %d %d", &phy, &chem, &bio, &math, &comp);

	/*Calculate Percentage*/

	per=(phy+chem+bio+math+comp)/5.0;
	printf("percentage=%2f\n", per);

	/*find grade according to the percentage use ele if ladder*/

	if(per>=90){
		printf("Grade A");
	} else if(per>=80){
		printf("Grade B");
	} else if(per>=70){
		printf("Grade C");
	} else if(per>=60){
		printf("Grade D");
	} else if(per>=40){
		printf("Grade E");
	} else {
		printf("Grade F - Failed");
	}

	getch();
}