//Problem2: finding area and perimeter of ractangel of circle
#include<stdio.h>
#define PI 3.14159
	int areaRact(int l,int b){
		return l*b;	
	}
	float areaCir(float r){
//		float PI=3.14;
		return PI*(r*r);
	
	}
	int periRact(int l, int b){
		return 2*(l+b);
	}
	float periCir(int r){
		return 2*(PI*r);
	}

int main()
{
	int length,breadth,input,choice;
	float radius;
	
	printf("1.Area 2.Perimeter: ");
	scanf("%d",&input);
	
	switch(input){
		case 1:
			printf("1.Ractangle 2.Circle : ");
			scanf("%d",&choice);
				if(choice==1){
					printf("Enter length and breadth: ");
					scanf("%d%d",&length,&breadth);
					printf("Area of Ractangle: %d\n",areaRact(length,breadth));
				}	
				else if(choice==2){
					printf("Enter radius of Circle: ");
					scanf("%f",&radius);
					printf("Area of Circle: %f\n",areaCir(radius));
				}
				else{
					printf("Please enter valid Input!!!!!!!!!!");
				}		
			break;
		case 2:
			printf("1.Ractangle 2.Circle: ");
			scanf("%d",&choice);
				if(choice==1){
					printf("Enter length and breadth: ");
					scanf("%d %d",&length,&breadth);
					printf("Perimiter of Ractangle: %d\n",periRact(length,breadth));
					break;
				}
				if(choice==2){
					printf("Enter radius of Circle: ");
					scanf("%f",&radius);
					printf("Perimeter of Circle: %f\n",periCir(radius));
					break;
				}
				else{
					printf("Enter Valid Input");
				}
			break;
		default:
			printf("Enter valid Input!!!!!");
			break;
		}	
	}

